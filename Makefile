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

# Test executables (one per test file)
TEST_EXECS = $(TESTS:%.cpp=$(BUILD_DIR)/%.exe)

# Main executable
MAIN_EXEC = $(BIN_DIR)/leetcode_cpp

# Default target
all: $(MAIN_EXEC) $(TEST_EXECS)

# Create build directories
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)
	mkdir -p $(BIN_DIR)
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/easy/best_time_to_buy_and_sell_stock_ii
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/easy/remove_duplicates_from_sorted_array
	mkdir -p $(BUILD_DIR)/medium/rotate_array
	mkdir -p $(BUILD_DIR)/$(TEST_DIR)/easy
	mkdir -p $(BUILD_DIR)/$(TEST_DIR)/medium

# Main executable
$(MAIN_EXEC): $(OBJECTS) | $(BUILD_DIR)
	$(CXX) $(OBJECTS) -o $@

# Test executables (build each test separately)
$(BUILD_DIR)/%.exe: %.cpp | $(BUILD_DIR)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $< -o $@

# Compile source files
$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run all tests
test: $(TEST_EXECS)
	@echo "Running all tests..."
	@for test in $(TEST_EXECS); do \
		echo "Running $$test..."; \
		$$test; \
		echo ""; \
	done

# Clean build files
clean:
	rm -rf $(BUILD_DIR)

# Install dependencies (Ubuntu/Debian)
install-deps:
	sudo apt-get update
	sudo apt-get install -y build-essential cmake

# Show help
help:
	@echo "Available targets:"
	@echo "  all          - Build main executable and tests"
	@echo "  test         - Run tests"
	@echo "  clean        - Remove build files"
	@echo "  install-deps - Install build dependencies"
	@echo "  help         - Show this help message"

.PHONY: all test clean install-deps help
