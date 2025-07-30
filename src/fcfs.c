#include <stdio.h>
#include <stdlib.h>
#include "fcfs.h"

void fcfs(Process p[], int n) {
    // Sort by arrival time
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(p[i].arrival > p[j].arrival) {
                Process temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    int time = 0;
    float totalWT = 0, totalTAT = 0;

    printf("\n--- FCFS Scheduling ---\n");
    printf("Gantt Chart:\n");

    for(int i=0; i<n; i++) {
        if(time < p[i].arrival) time = p[i].arrival;
        p[i].start = time;
        p[i].completion = time + p[i].burst;
        p[i].turnaround = p[i].completion - p[i].arrival;
        p[i].waiting = p[i].turnaround - p[i].burst;

        time = p[i].completion;

        totalWT += p[i].waiting;
        totalTAT += p[i].turnaround;

        printf("| P%d ", p[i].pid);
    }
    printf("|\n0");
    for(int i=0; i<n; i++)
        printf("   %d", p[i].completion);

    printf("\n\nAverage Waiting Time: %.2f", totalWT/n);
    printf("\nAverage Turnaround Time: %.2f\n", totalTAT/n);
}
