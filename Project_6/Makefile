# Project name
PROJECT_NAME = Project_6

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

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)

