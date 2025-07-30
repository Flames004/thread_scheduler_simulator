#!/bin/bash
echo "Building CPU Scheduling Simulator..."

# Compile each algorithm separately
echo "Compiling FCFS..."
gcc fcfs/fcfs.c -o fcfs/fcfs

echo "Compiling SJF..."
gcc sjf/sjf.c -o sjf/sjf

echo "Compiling Round Robin..."
gcc round_robin/rr.c -o round_robin/rr

echo "Compiling Priority..."
gcc priority/priority.c -o priority/priority

echo "Compiling main scheduler..."
gcc main.c -o scheduler

echo ""
echo "Build complete! Run: ./scheduler"
