# Variables
CXX := g++                          # C++ compiler
CXXFLAGS := -std=c++17 -Wall -Wextra -g -Iinclude      # Compilation flags (-Iinclude for headers)
SRC := $(wildcard src/*.cpp)        # Find all .cpp files in the src directory
OBJ := $(SRC:src/%.cpp=obj/%.o)     # Map source files to object files
TARGET := app                       # Name of the final executable

# Default target
all: $(TARGET)

# Rule to link all object files into the final executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

# Rule to compile .cpp files into .o files
obj/%.o: src/%.cpp
	mkdir -p obj
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -rf obj $(TARGET)

# PHONY targets
.PHONY: all clean

