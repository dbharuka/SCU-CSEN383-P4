# Makefile for Project 4 - Swapping and Paging Simulator

# Compiler
CC = gcc

# Flags
CFLAGS = -Wall -g

# Executable name
TARGET = simulation

# Source files
SRCS = SIMULATION.c FCFS.c LFU.c LRU.c MFU.c PAGE.c R.c

# Default target
all: $(TARGET)

# Direct compilation and linking in one step (no .o files)
$(TARGET):
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

# Clean target to remove executable
clean:
	del /Q $(TARGET).exe 2>nul || rm -f $(TARGET)
