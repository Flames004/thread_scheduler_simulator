#!/bin/bash
gcc fcfs/fcfs.c -o fcfs/fcfs
gcc sjf/sjf.c -o sjf/sjf
gcc round_robin/rr.c -o round_robin/rr
gcc priority/priority.c -o priority/priority
gcc main.c -o scheduler
echo "Build complete! Run ./scheduler"
