#!/bin/bash
# Universal build script that works on both Windows (Git Bash/WSL) and Linux

echo "CPU Scheduling Simulator - Universal Build Script"
echo "=================================================="

# Detect operating system
if [[ "$OSTYPE" == "msys" || "$OSTYPE" == "win32" || "$OSTYPE" == "cygwin" ]]; then
    echo "Detected: Windows environment"
    EXE_EXT=".exe"
    echo "Building for Windows..."
else
    echo "Detected: Unix/Linux environment" 
    EXE_EXT=""
    echo "Building for Unix/Linux..."
fi

echo ""
echo "Compiling FCFS..."
gcc fcfs/fcfs.c -o fcfs/fcfs${EXE_EXT}

echo "Compiling SJF..."
gcc sjf/sjf.c -o sjf/sjf${EXE_EXT}

echo "Compiling Round Robin..."
gcc round_robin/rr.c -o round_robin/rr${EXE_EXT}

echo "Compiling Priority..."
gcc priority/priority.c -o priority/priority${EXE_EXT}

echo "Compiling main scheduler..."
gcc main.c -o scheduler${EXE_EXT}

echo ""
echo "Build complete!"
if [[ "$EXE_EXT" == ".exe" ]]; then
    echo "Run: scheduler.exe"
else
    echo "Run: ./scheduler"
fi
