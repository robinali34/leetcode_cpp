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
	# Basics (Design Patterns)
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/basics
	# Easy problems
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/easy/two_sum
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/easy/best_time_to_buy_and_sell_stock
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/easy/best_time_to_buy_and_sell_stock_ii
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/easy/remove_duplicates_from_sorted_array
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/easy/valid_anagram
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/easy/isomorphic_strings
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/easy/happy_number
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/easy/contains_duplicate
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/easy/reverse_linked_list
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/easy/merge_two_sorted_lists
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/easy/linked_list_cycle
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/easy/palindrome_linked_list
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/easy/intersection_of_two_linked_lists
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/easy/remove_duplicates_from_sorted_list
	# Medium problems
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/longest_substring_without_repeating_characters
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/maximum_subarray
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/product_of_array_except_self
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/maximum_product_subarray
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/rotate_array
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/merge_intervals
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/insert_interval
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/non_overlapping_intervals
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/missing_element_in_sorted_array
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/valid_sudoku
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/word_pattern
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/top_k_frequent_elements
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/find_duplicate_number
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/longest_consecutive_sequence
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/randomized_set
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/linked_list_cycle_ii
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/remove_nth_node_from_end
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/add_two_numbers
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/copy_list_with_random_pointer
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/reorder_list
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/rotate_list
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/swap_nodes_in_pairs
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/odd_even_linked_list
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/flatten_multilevel_doubly_linked_list
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/lru_cache
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/design_linked_list
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/remove_duplicates_from_sorted_list_ii
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/medium/partition_list
	# Hard problems
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/hard/first_missing_positive
	mkdir -p $(BUILD_DIR)/$(SRC_DIR)/hard/reverse_nodes_in_k_group
	# Test directories
	mkdir -p $(BUILD_DIR)/$(TEST_DIR)/easy
	mkdir -p $(BUILD_DIR)/$(TEST_DIR)/medium
	mkdir -p $(BUILD_DIR)/$(TEST_DIR)/hard

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

# Build design patterns demo
patterns-demo: | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $(SRC_DIR)/basics/*.cpp -o $(BUILD_DIR)/design_patterns_demo

# Show help
help:
	@echo "Available targets:"
	@echo "  all          - Build main executable and tests"
	@echo "  test         - Run tests"
	@echo "  patterns-demo - Build and run design patterns demonstration"
	@echo "  clean        - Remove build files"
	@echo "  install-deps - Install build dependencies"
	@echo "  help         - Show this help message"

.PHONY: all test patterns-demo clean install-deps help
