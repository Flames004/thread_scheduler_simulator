# Cross-platform Makefile for CPU Scheduling Simulator
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Detect operating system
ifeq ($(OS),Windows_NT)
    EXE = .exe
    RM = del /Q
    MKDIR = mkdir
    PATHSEP = \\
else
    EXE = 
    RM = rm -f
    MKDIR = mkdir -p
    PATHSEP = /
endif

# Targets
TARGETS = scheduler$(EXE) fcfs/fcfs$(EXE) sjf/sjf$(EXE) round_robin/rr$(EXE) priority/priority$(EXE)

.PHONY: all clean help

all: $(TARGETS)
	@echo "Build complete!"
	@echo "Run: ./scheduler$(EXE) (Linux) or scheduler.exe (Windows)"

scheduler$(EXE): main.c
	$(CC) $(CFLAGS) -o $@ $<

fcfs/fcfs$(EXE): fcfs/fcfs.c
	$(CC) $(CFLAGS) -o $@ $<

sjf/sjf$(EXE): sjf/sjf.c
	$(CC) $(CFLAGS) -o $@ $<

round_robin/rr$(EXE): round_robin/rr.c
	$(CC) $(CFLAGS) -o $@ $<

priority/priority$(EXE): priority/priority.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
ifeq ($(OS),Windows_NT)
	-$(RM) scheduler.exe 2>nul
	-$(RM) fcfs$(PATHSEP)fcfs.exe 2>nul
	-$(RM) sjf$(PATHSEP)sjf.exe 2>nul
	-$(RM) round_robin$(PATHSEP)rr.exe 2>nul
	-$(RM) priority$(PATHSEP)priority.exe 2>nul
else
	-$(RM) scheduler
	-$(RM) fcfs/fcfs
	-$(RM) sjf/sjf
	-$(RM) round_robin/rr
	-$(RM) priority/priority
endif
	@echo "Clean complete!"

help:
	@echo "CPU Scheduling Simulator - Build System"
	@echo ""
	@echo "Available targets:"
	@echo "  all     - Build all components (default)"
	@echo "  clean   - Remove all compiled files"
	@echo "  help    - Show this help message"
	@echo ""
	@echo "Usage:"
	@echo "  make        # Build everything"
	@echo "  make clean  # Clean up"
