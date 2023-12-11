# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -std=c99 -g

# Target executable name
TARGET = Question

# Source files
SOURCES = Question.c

# Object files
OBJECTS = $(SOURCES:.c=.o)

# Default target
all: $(TARGET)

# Rule for building the target executable
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET)

# Rule for compiling source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target
clean:
	rm -f $(OBJECTS) $(TARGET)

# PHONY targets
.PHONY: all clean
