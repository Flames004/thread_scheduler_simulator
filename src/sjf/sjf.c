#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct {
    int pid, arrival, burst, start, completion, turnaround, waiting, finished;
} Process;

void inputProcesses(Process p[], int n) {
    for(int i=0; i<n; i++) {
        p[i].pid = i+1;
        printf("Enter Arrival Time and Burst Time for P%d: ", i+1);
        scanf("%d %d", &p[i].arrival, &p[i].burst);
        p[i].finished = 0;
    }
}

void sjf(Process p[], int n) {
    int time = 0, completed = 0;
    float totalWT = 0, totalTAT = 0;

    printf("\n--- SJF (Non-Preemptive) Scheduling ---\nGantt Chart:\n");

    while(completed < n) {
        int idx = -1, minBurst = INT_MAX;

        for(int i=0; i<n; i++) {
            if(p[i].arrival <= time && !p[i].finished && p[i].burst < minBurst) {
                minBurst = p[i].burst;
                idx = i;
            }
        }

        if(idx == -1) {
            time++;
            continue;
        }

        p[idx].start = time;
        p[idx].completion = time + p[idx].burst;
        p[idx].turnaround = p[idx].completion - p[idx].arrival;
        p[idx].waiting = p[idx].turnaround - p[idx].burst;
        p[idx].finished = 1;

        time = p[idx].completion;
        completed++;

        totalWT += p[idx].waiting;
        totalTAT += p[idx].turnaround;

        printf("| P%d ", p[idx].pid);
    }

    printf("|\n0");
    for(int i=0; i<n; i++)
        if(p[i].finished)
            printf("   %d", p[i].completion);

    printf("\n\nAverage Waiting Time: %.2f", totalWT/n);
    printf("\nAverage Turnaround Time: %.2f\n", totalTAT/n);
}

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    Process p[n];
    inputProcesses(p, n);
    sjf(p, n);
    return 0;
}
