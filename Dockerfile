# Multi-stage Dockerfile for C++ LeetCode solutions
FROM ubuntu:22.04 as base

# Set environment variables
ENV DEBIAN_FRONTEND=noninteractive
ENV CC=gcc
ENV CXX=g++
ENV CXXFLAGS="-std=c++17 -Wall -Wextra -g"

# Install system dependencies
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    valgrind \
    cppcheck \
    git \
    wget \
    curl \
    && rm -rf /var/lib/apt/lists/*

# Install clang and clang-tidy for additional analysis
RUN apt-get update && apt-get install -y \
    clang \
    clang-tidy \
    && rm -rf /var/lib/apt/lists/*

# Set working directory
WORKDIR /app

# Copy source code
COPY . .

# Build stage
FROM base as builder

# Build the project
RUN make clean && make all

# Test stage
FROM builder as tester

# Run tests
RUN find build/tests -name "*.exe" -exec {} \;

# Production stage
FROM base as production

# Copy built binaries and source
COPY --from=builder /app/build/bin /app/build/bin
COPY --from=builder /app/src /app/src
COPY --from=builder /app/tests /app/tests
COPY --from=builder /app/Makefile /app/Makefile
COPY --from=builder /app/README.md /app/README.md
COPY --from=builder /app/LICENSE /app/LICENSE

# Create a non-root user
RUN useradd -m -u 1000 appuser && \
    chown -R appuser:appuser /app

USER appuser

# Set the default command
CMD ["./build/bin/leetcode_cpp"]
