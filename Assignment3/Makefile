# Makefile for Trigonometric Functions project
# Note: This Makefile is provided for educational purposes only.
# Please understand and adapt it as necessary for your own projects.

# Compiler settings - Can change cc to gcc or clang if required
CC = gcc

CFLAGS := -Wall -Wextra -pedantic -std=c11
LDFLAGS := -lm

# Project files
SOURCES := Question.c trigonometric_functions.c
OBJECTS := $(SOURCES:.c=.o)
EXECUTABLE := Question

# The default target
all: $(EXECUTABLE)

# Link the program
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

# Compile the source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

# Non-file targets
.PHONY: all clean
