#ifndef FCFS_H
#define FCFS_H

// Forward declaration of Process struct
typedef struct {
    int pid;
    int arrival;
    int burst;
    int priority;
    int start;
    int completion;
    int turnaround;
    int waiting;
} Process;

// Function declaration
void fcfs(Process p[], int n);

#endif
