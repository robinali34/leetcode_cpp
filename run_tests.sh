#!/bin/bash

# Test runner script for LeetCode C++ solutions
# Usage: ./run_tests.sh [easy|medium|hard|all|basics]

set -e

BUILD_DIR="build"
TEST_DIR="tests"

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Function to print colored output
print_status() {
    echo -e "${BLUE}[INFO]${NC} $1"
}

print_success() {
    echo -e "${GREEN}[SUCCESS]${NC} $1"
}

print_error() {
    echo -e "${RED}[ERROR]${NC} $1"
}

print_warning() {
    echo -e "${YELLOW}[WARNING]${NC} $1"
}

# Function to run tests for a specific difficulty
run_difficulty_tests() {
    local difficulty=$1
    local test_count=0
    local passed_count=0
    local failed_count=0
    
    print_status "Running $difficulty tests..."
    
    if [ ! -d "$TEST_DIR/$difficulty" ]; then
        print_warning "No tests found for difficulty: $difficulty"
        return 0
    fi
    
    # Find all test files in the difficulty directory
    for test_file in "$TEST_DIR/$difficulty"/*.cpp; do
        if [ -f "$test_file" ]; then
            test_count=$((test_count + 1))
            test_name=$(basename "$test_file" .cpp)
            test_exec="$BUILD_DIR/$test_file.exe"
            
            print_status "Building and running $test_name..."
            
            # Build the test
            if g++ -std=c++17 -Wall -Wextra -g "$test_file" -o "$test_exec" 2>/dev/null; then
                # Run the test
                if "$test_exec" 2>/dev/null; then
                    print_success "$test_name passed"
                    passed_count=$((passed_count + 1))
                else
                    print_error "$test_name failed"
                    failed_count=$((failed_count + 1))
                fi
            else
                print_error "Failed to build $test_name"
                failed_count=$((failed_count + 1))
            fi
            
            echo ""
        fi
    done
    
    # Print summary
    echo "=========================================="
    print_status "$difficulty tests summary:"
    echo "Total tests: $test_count"
    print_success "Passed: $passed_count"
    if [ $failed_count -gt 0 ]; then
        print_error "Failed: $failed_count"
    else
        print_success "Failed: $failed_count"
    fi
    echo "=========================================="
    echo ""
}

# Function to run basics tests
run_basics_tests() {
    print_status "Running design patterns tests..."
    
    local test_file="$TEST_DIR/basics/test_design_patterns.cpp"
    local test_exec="$BUILD_DIR/$test_file.exe"
    
    if [ -f "$test_file" ]; then
        print_status "Building and running design patterns tests..."
        
        if g++ -std=c++17 -Wall -Wextra -g "$test_file" -o "$test_exec" 2>/dev/null; then
            if "$test_exec" 2>/dev/null; then
                print_success "Design patterns tests passed"
            else
                print_error "Design patterns tests failed"
            fi
        else
            print_error "Failed to build design patterns tests"
        fi
    else
        print_warning "Design patterns test file not found"
    fi
    
    echo ""
}

# Main execution
main() {
    # Create build directory if it doesn't exist
    mkdir -p "$BUILD_DIR"
    
    # Parse command line arguments
    case "${1:-all}" in
        "easy")
            run_difficulty_tests "easy"
            ;;
        "medium")
            run_difficulty_tests "medium"
            ;;
        "hard")
            run_difficulty_tests "hard"
            ;;
        "basics")
            run_basics_tests
            ;;
        "all")
            print_status "Running all tests..."
            echo ""
            run_basics_tests
            run_difficulty_tests "easy"
            run_difficulty_tests "medium"
            run_difficulty_tests "hard"
            ;;
        *)
            echo "Usage: $0 [easy|medium|hard|all|basics]"
            echo ""
            echo "Examples:"
            echo "  $0 easy     # Run only easy tests"
            echo "  $0 medium   # Run only medium tests"
            echo "  $0 hard     # Run only hard tests"
            echo "  $0 basics   # Run only design patterns tests"
            echo "  $0 all      # Run all tests (default)"
            echo "  $0          # Run all tests (default)"
            exit 1
            ;;
    esac
}

# Run main function with all arguments
main "$@"


