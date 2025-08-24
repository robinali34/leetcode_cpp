# CI/CD Setup Guide for LeetCode C++ Project

This guide explains how to set up and use the Continuous Integration/Continuous Deployment (CI/CD) pipeline for the LeetCode C++ project.

## 🚀 Overview

The project includes multiple CI/CD solutions:
- **GitHub Actions**: Cloud-based CI/CD for GitHub repositories
- **Jenkins**: Self-hosted CI/CD server with advanced features
- **Docker**: Containerized builds and deployments
- **SonarQube**: Code quality analysis and monitoring

## 📋 Prerequisites

- GitHub repository with admin access
- Docker and Docker Compose installed
- Jenkins server (optional, for self-hosted CI/CD)
- SonarQube server (optional, for code quality analysis)

## 🔧 GitHub Actions Setup

### 1. Automatic Setup
The `.github/workflows/ci-cd.yml` file is automatically detected by GitHub Actions.

### 2. Manual Setup (if needed)
1. Go to your GitHub repository
2. Click on "Actions" tab
3. Click "New workflow"
4. Choose "set up a workflow yourself"
5. Copy the content from `.github/workflows/ci-cd.yml`
6. Commit the file

### 3. GitHub Actions Features
- **Multi-platform builds**: Ubuntu, macOS
- **Multi-compiler support**: GCC, Clang
- **Automated testing**: Runs all test executables
- **Code quality checks**: cppcheck, formatting validation
- **Security scanning**: Basic security vulnerability detection
- **Artifact management**: Builds and source code archiving
- **Release automation**: Automatic release creation on tags

## 🐳 Docker Setup

### 1. Build Development Environment
```bash
# Build and start development container
docker-compose --profile dev up -d

# Access development container
docker-compose exec dev bash

# Build project inside container
make clean && make all
```

### 2. Run Tests
```bash
# Run tests in dedicated test container
docker-compose --profile test up --build

# Or run tests in development container
docker-compose exec dev make test
```

### 3. Production Build
```bash
# Build production image
docker-compose --profile prod up --build

# Run production container
docker run --rm leetcode_cpp-prod
```

## 🎯 Jenkins Setup

### 1. Start Jenkins with Docker
```bash
# Start Jenkins and related services
docker-compose --profile jenkins up -d

# Access Jenkins at http://localhost:8080
# Initial admin password: Check docker logs
docker-compose logs jenkins
```

### 2. Jenkins Initial Setup
1. Access http://localhost:8080
2. Install suggested plugins
3. Create admin user
4. Configure Jenkins URL

### 3. Install Required Jenkins Plugins
- **Pipeline**: For Jenkinsfile support
- **Git**: For Git integration
- **Docker**: For Docker support
- **SonarQube Scanner**: For code quality analysis
- **Cobertura**: For coverage reports
- **Warnings**: For static analysis results

### 4. Configure Jenkins Pipeline
1. Create new Pipeline job
2. Set pipeline definition to "Pipeline script from SCM"
3. Configure Git repository
4. Set branch to `main`
5. Set script path to `Jenkinsfile`

### 5. Jenkins Pipeline Features
- **Multi-stage pipeline**: Checkout, Build, Test, Quality, Deploy
- **Environment detection**: Automatic OS and compiler detection
- **Dependency management**: Automatic installation of build tools
- **Artifact archiving**: Build artifacts and source code
- **Quality gates**: Code quality and security checks
- **Deployment automation**: Release package creation

## 📊 SonarQube Setup

### 1. Start SonarQube
```bash
# Start SonarQube with PostgreSQL
docker-compose --profile jenkins up -d sonarqube postgres

# Access SonarQube at http://localhost:9000
# Default credentials: admin/admin
```

### 2. Configure SonarQube
1. Login to SonarQube
2. Create new project: "leetcode_cpp"
3. Generate token for Jenkins integration
4. Configure quality gates and rules

### 3. SonarQube Analysis
```bash
# Run analysis from Jenkins or locally
sonar-scanner -Dsonar.projectKey=leetcode_cpp \
              -Dsonar.sources=src \
              -Dsonar.tests=tests \
              -Dsonar.host.url=http://localhost:9000 \
              -Dsonar.login=YOUR_TOKEN
```

## 🔄 CI/CD Workflow

### 1. Development Workflow
```bash
# 1. Create feature branch
git checkout -b feature/new-solution

# 2. Make changes and commit
git add .
git commit -m "Add new solution"

# 3. Push and create PR
git push origin feature/new-solution
# Create Pull Request on GitHub
```

### 2. Automated Pipeline
1. **GitHub Actions**: Runs on every push and PR
2. **Build & Test**: Multi-platform compilation and testing
3. **Quality Checks**: Code formatting, static analysis
4. **Security Scan**: Vulnerability detection
5. **Artifact Creation**: Build artifacts and release packages

### 3. Deployment
- **Development**: Automatic deployment to development environment
- **Staging**: Manual approval for staging deployment
- **Production**: Automatic deployment on main branch merge

## 📈 Monitoring and Metrics

### 1. Build Status
- GitHub Actions: Repository Actions tab
- Jenkins: Jenkins dashboard
- Email notifications for build failures

### 2. Code Quality
- SonarQube dashboard
- Quality gate status
- Code coverage reports
- Security vulnerability tracking

### 3. Performance Metrics
- Build time tracking
- Test execution time
- Deployment frequency
- Lead time for changes

## 🛠️ Troubleshooting

### Common Issues

#### 1. Build Failures
```bash
# Check build logs
docker-compose logs dev

# Verify dependencies
docker-compose exec dev gcc --version
docker-compose exec dev make --version
```

#### 2. Jenkins Connection Issues
```bash
# Check Jenkins status
docker-compose ps jenkins

# View Jenkins logs
docker-compose logs jenkins

# Restart Jenkins
docker-compose restart jenkins
```

#### 3. SonarQube Analysis Failures
```bash
# Check SonarQube status
docker-compose ps sonarqube

# Verify database connection
docker-compose exec postgres psql -U sonar -d sonarqube
```

### Debug Commands
```bash
# Check all services status
docker-compose ps

# View all logs
docker-compose logs

# Rebuild specific service
docker-compose build --no-cache dev

# Clean up volumes
docker-compose down -v
```

## 📚 Additional Resources

### Documentation
- [GitHub Actions Documentation](https://docs.github.com/en/actions)
- [Jenkins User Documentation](https://www.jenkins.io/doc/)
- [SonarQube Documentation](https://docs.sonarqube.org/)
- [Docker Documentation](https://docs.docker.com/)

### Best Practices
1. **Branch Protection**: Enable branch protection rules on main branch
2. **Code Review**: Require code review for all PRs
3. **Quality Gates**: Set up quality gates in SonarQube
4. **Automated Testing**: Ensure all tests pass before merge
5. **Security Scanning**: Regular security vulnerability scans

### Customization
- Modify `.github/workflows/ci-cd.yml` for GitHub Actions
- Update `Jenkinsfile` for Jenkins pipeline changes
- Adjust `Dockerfile` for different build environments
- Configure `sonar-project.properties` for SonarQube analysis

## 🎉 Getting Started

1. **Fork/Clone** this repository
2. **Enable GitHub Actions** (automatic)
3. **Start Jenkins** (optional): `docker-compose --profile jenkins up -d`
4. **Start SonarQube** (optional): `docker-compose --profile jenkins up -d sonarqube`
5. **Make changes** and push to trigger CI/CD pipeline
6. **Monitor** build status and quality metrics

The CI/CD pipeline will automatically build, test, and analyze your code on every push and pull request!
