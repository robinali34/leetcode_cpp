CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g
SRC_DIR = src
TEST_DIR = tests
BUILD_DIR = build
BIN_DIR = $(BUILD_DIR)/bin

# Find all source files
SOURCES = $(shell find $(SRC_DIR) -name "*.cpp")
TESTS = $(shell find $(TEST_DIR) -name "*.cpp")

# Object files
OBJECTS = $(SOURCES:%.cpp=$(BUILD_DIR)/%.o)
TEST_OBJECTS = $(TESTS:%.cpp=$(BUILD_DIR)/%.o)

# Executables
MAIN_EXEC = $(BIN_DIR)/leetcode_cpp
TEST_EXEC = $(BIN_DIR)/run_tests

# Default target
all: $(MAIN_EXEC) $(TEST_EXEC)

# Create build directories
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)
	mkdir -p $(BIN_DIR)

# Main executable
$(MAIN_EXEC): $(OBJECTS) | $(BUILD_DIR)
	$(CXX) $(OBJECTS) -o $@

# Test executable
$(TEST_EXEC): $(TEST_OBJECTS) | $(BUILD_DIR)
	$(CXX) $(TEST_OBJECTS) -o $@

# Compile source files
$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run tests
test: $(TEST_EXEC)
	$(TEST_EXEC)

# Clean build files
clean:
	rm -rf $(BUILD_DIR)

# Show help
help:
	@echo "Available targets:"
	@echo "  all          - Build main executable and tests"
	@echo "  test         - Run tests"
	@echo "  clean        - Remove build files"
	@echo "  help         - Show this help message"

.PHONY: all test clean help
