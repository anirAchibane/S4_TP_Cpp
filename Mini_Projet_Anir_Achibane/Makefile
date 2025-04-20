# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic

# Executable name
TARGET = main

# Source files
SRCS = main.cpp \
	   Resource.cpp \
       Container.cpp \
       Pod.cpp \
       Server.cpp \
       KubernetesCluster.cpp \
       Cloud_Util.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean compiled files
clean:
	rm -f $(TARGET) *.o

# Run the program
run: all
	./$(TARGET)