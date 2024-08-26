# Project name
PROJECT_NAME = UnitTest_Catch2

# Compiler settings
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Werror -Wextra -O3 -g

# Source files (located in the "src" directory)
SRCS = $(wildcard src/*.cpp)

# Build directory
BUILD_DIR := build
$(shell mkdir -p $(BUILD_DIR))

# Bin directory
BIN_DIR := bin
$(shell mkdir -p $(BIN_DIR))

# Object files (saved in the "build" directory)
OBJS = $(addprefix $(BUILD_DIR)/, $(notdir $(SRCS:.cpp=.o)))

# Target executable
TARGET := $(BIN_DIR)/$(PROJECT_NAME)

# Rule to compile each source file
$(BUILD_DIR)/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Build rule
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile the test file
$(BUILD_DIR)/test.o: test/test.cpp
	$(CXX) -std=c++14 -I. -c $< -o $@

# Test rule
test: $(BUILD_DIR)/test.o
	rm -f $(BIN_DIR)/Test_$(PROJECT_NAME)
	$(CXX) -std=c++14 -I. test/test.cpp -o $(BIN_DIR)/Test_$(PROJECT_NAME)
	./$(BIN_DIR)/Test_$(PROJECT_NAME)

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET) $(BUILD_DIR)/test.o $(BIN_DIR)/Test_$(PROJECT_NAME)
