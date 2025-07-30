#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int pid, arrival, burst, remaining, completion, turnaround, waiting;
} Process;

void inputProcesses(Process p[], int n) {
    for(int i=0; i<n; i++) {
        p[i].pid = i+1;
        printf("Enter Arrival Time and Burst Time for P%d: ", i+1);
        scanf("%d %d", &p[i].arrival, &p[i].burst);
        p[i].remaining = p[i].burst;
    }
}

void roundRobin(Process p[], int n, int quantum) {
    int time = 0, completed = 0;
    float totalWT = 0, totalTAT = 0;

    printf("\n--- Round Robin Scheduling (q=%d) ---\nGantt Chart:\n", quantum);

    while(completed < n) {
        int done = 0;
        for(int i=0; i<n; i++) {
            if(p[i].arrival <= time && p[i].remaining > 0) {
                done = 1;
                if(p[i].remaining > quantum) {
                    printf("| P%d ", p[i].pid);
                    time += quantum;
                    p[i].remaining -= quantum;
                } else {
                    printf("| P%d ", p[i].pid);
                    time += p[i].remaining;
                    p[i].completion = time;
                    p[i].turnaround = p[i].completion - p[i].arrival;
                    p[i].waiting = p[i].turnaround - p[i].burst;
                    totalWT += p[i].waiting;
                    totalTAT += p[i].turnaround;
                    p[i].remaining = 0;
                    completed++;
                }
            }
        }
        if(!done) time++; // CPU idle
    }

    printf("|\n0");
    for(int i=0; i<n; i++)
        printf("   %d", p[i].completion);

    printf("\n\nAverage Waiting Time: %.2f", totalWT/n);
    printf("\nAverage Turnaround Time: %.2f\n", totalTAT/n);
}

int main() {
    int n, quantum;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    Process p[n];
    inputProcesses(p, n);
    printf("Enter Time Quantum: ");
    scanf("%d", &quantum);
    roundRobin(p, n, quantum);
    return 0;
}
