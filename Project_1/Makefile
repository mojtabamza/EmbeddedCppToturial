# Compiler settings
CXX = g++
CXXFLAGS = -std=c++11

# Source files
SRCS = $(wildcard src/*.cpp)

# Object files
OBJS = $(SRCS:.cpp=.o)

# Target executable
TARGET = bin/P_1

# Build rule
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)
