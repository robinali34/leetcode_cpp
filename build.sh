#!/bin/bash

echo "Building LeetCode C++ project..."

# Clean previous build
make clean

# Build the project
make all

if [ $? -eq 0 ]; then
    echo "Build successful!"
    echo ""
    echo "Running main executable..."
    ./build/bin/leetcode_cpp
    echo ""
    echo "Running tests..."
    make test
else
    echo "Build failed!"
    exit 1
fi
