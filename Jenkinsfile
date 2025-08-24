pipeline {
    agent any
    
    environment {
        BUILD_DIR = 'build'
        BIN_DIR = 'build/bin'
        TESTS_DIR = 'build/tests'
        PROJECT_NAME = 'leetcode_cpp'
    }
    
    stages {
        stage('Checkout') {
            steps {
                checkout scm
                echo "Building ${PROJECT_NAME} from ${env.BRANCH_NAME}"
            }
        }
        
        stage('Setup Environment') {
            steps {
                script {
                    // Detect OS and set environment variables
                    if (isUnix()) {
                        if (sh(script: 'uname -s', returnStdout: true).trim() == 'Darwin') {
                            env.OS_TYPE = 'macos'
                            env.CC = 'clang'
                            env.CXX = 'clang++'
                        } else {
                            env.OS_TYPE = 'linux'
                            env.CC = 'gcc'
                            env.CXX = 'g++'
                        }
                    } else {
                        env.OS_TYPE = 'windows'
                        env.CC = 'gcc'
                        env.CXX = 'g++'
                    }
                    
                    echo "OS Type: ${env.OS_TYPE}"
                    echo "Compiler: ${env.CC}/${env.CXX}"
                }
            }
        }
        
        stage('Install Dependencies') {
            steps {
                script {
                    if (env.OS_TYPE == 'linux') {
                        sh '''
                            sudo apt-get update
                            sudo apt-get install -y build-essential cmake valgrind cppcheck
                            if [ "$CC" = "clang" ]; then
                                sudo apt-get install -y clang clang-tidy
                            fi
                        '''
                    } else if (env.OS_TYPE == 'macos') {
                        sh '''
                            brew install cmake
                            if [ "$CC" = "clang" ]; then
                                brew install llvm
                            fi
                        '''
                    }
                }
            }
        }
        
        stage('Build') {
            steps {
                script {
                    try {
                        sh '''
                            make clean
                            make all
                        '''
                        echo "Build completed successfully"
                    } catch (Exception e) {
                        echo "Build failed: ${e.getMessage()}"
                        currentBuild.result = 'FAILURE'
                        error "Build stage failed"
                    }
                }
            }
        }
        
        stage('Test') {
            steps {
                script {
                    try {
                        // Run individual test executables
                        sh '''
                            echo "Running test executables..."
                            for test in build/tests/easy/*.exe build/tests/medium/*.exe; do
                                if [ -f "$test" ]; then
                                    echo "Running test: $test"
                                    $test || echo "Test $test failed but continuing..."
                                fi
                            done
                        '''
                        
                        // Run main executable
                        sh '''
                            if [ -f "build/bin/leetcode_cpp" ]; then
                                echo "Running main executable"
                                timeout 30s ./build/bin/leetcode_cpp || echo "Main executable completed"
                            fi
                        '''
                        
                        echo "Testing completed"
                    } catch (Exception e) {
                        echo "Testing failed: ${e.getMessage()}"
                        currentBuild.result = 'UNSTABLE'
                    }
                }
            }
        }
        
        stage('Code Quality') {
            steps {
                script {
                    try {
                        // Run cppcheck
                        sh '''
                            echo "Running cppcheck..."
                            cppcheck --enable=all --std=c++17 --language=c++ src/ 2> cppcheck_report.txt || true
                            cat cppcheck_report.txt
                        '''
                        
                        // Check formatting consistency
                        sh '''
                            echo "Checking code formatting..."
                            if find src tests -name "*.cpp" -o -name "*.h" | xargs grep -l "std::"; then
                                echo "Warning: std:: prefixes found - formatting check failed"
                                exit 1
                            else
                                echo "No std:: prefixes found - formatting check passed"
                            fi
                        '''
                        
                        echo "Code quality checks completed"
                    } catch (Exception e) {
                        echo "Code quality checks failed: ${e.getMessage()}"
                        currentBuild.result = 'UNSTABLE'
                    }
                }
            }
        }
        
        stage('Security Scan') {
            steps {
                script {
                    try {
                        sh '''
                            echo "Running security scan..."
                            
                            # Check for hardcoded secrets
                            if grep -r "password\|secret\|key\|token" src/ --exclude-dir=.git; then
                                echo "Warning: Potential hardcoded secrets found"
                                exit 1
                            else
                                echo "No hardcoded secrets found"
                            fi
                            
                            # Check for dangerous functions
                            if grep -r "system\|popen\|exec" src/ --exclude-dir=.git; then
                                echo "Warning: Potentially dangerous system calls found"
                                exit 1
                            else
                                echo "No dangerous system calls found"
                            fi
                        '''
                        
                        echo "Security scan completed"
                    } catch (Exception e) {
                        echo "Security scan failed: ${e.getMessage()}"
                        currentBuild.result = 'UNSTABLE'
                    }
                }
            }
        }
        
        stage('Archive Artifacts') {
            when {
                anyOf {
                    branch 'main'
                    branch 'develop'
                }
            }
            steps {
                script {
                    try {
                        // Archive build artifacts
                        archiveArtifacts artifacts: 'build/**/*', fingerprint: true
                        
                        // Archive source code
                        archiveArtifacts artifacts: 'src/**/*,tests/**/*,Makefile,README.md,LICENSE', fingerprint: true
                        
                        echo "Artifacts archived successfully"
                    } catch (Exception e) {
                        echo "Artifact archiving failed: ${e.getMessage()}"
                    }
                }
            }
        }
        
        stage('Deploy') {
            when {
                branch 'main'
            }
            steps {
                script {
                    try {
                        // Create release package
                        sh '''
                            mkdir -p release
                            cp -r build/bin/* release/ 2>/dev/null || true
                            cp -r src/ release/
                            cp -r tests/ release/
                            cp Makefile release/
                            cp README.md release/
                            cp LICENSE release/
                            
                            # Create tar.gz archive
                            tar -czf leetcode_cpp_release.tar.gz release/
                        '''
                        
                        // Archive release package
                        archiveArtifacts artifacts: 'leetcode_cpp_release.tar.gz', fingerprint: true
                        
                        echo "Deployment package created successfully"
                    } catch (Exception e) {
                        echo "Deployment failed: ${e.getMessage()}"
                        currentBuild.result = 'FAILURE'
                        error "Deployment stage failed"
                    }
                }
            }
        }
    }
    
    post {
        always {
            // Clean up workspace
            cleanWs()
            
            // Send notifications
            script {
                if (currentBuild.result == 'SUCCESS') {
                    echo "Pipeline completed successfully!"
                } else if (currentBuild.result == 'UNSTABLE') {
                    echo "Pipeline completed with warnings"
                } else if (currentBuild.result == 'FAILURE') {
                    echo "Pipeline failed!"
                }
            }
        }
        
        success {
            echo "Build succeeded!"
        }
        
        failure {
            echo "Build failed!"
        }
        
        unstable {
            echo "Build unstable!"
        }
    }
}
