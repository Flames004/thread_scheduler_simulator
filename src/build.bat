@echo off
echo Building CPU Scheduling Simulator...

REM Compile each algorithm separately
echo Compiling FCFS...
gcc fcfs/fcfs.c -o fcfs/fcfs.exe

echo Compiling SJF...
gcc sjf/sjf.c -o sjf/sjf.exe

echo Compiling Round Robin...
gcc round_robin/rr.c -o round_robin/rr.exe

echo Compiling Priority...
gcc priority/priority.c -o priority/priority.exe

echo Compiling main scheduler...
gcc main.c -o scheduler.exe

echo.
echo Build complete! Run: scheduler.exe
pause
