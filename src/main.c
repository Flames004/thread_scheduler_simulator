#include <stdio.h>
#include <stdlib.h>
#include "fcfs.h"

void inputProcesses(Process p[], int n) {
    for(int i=0; i<n; i++) {
        p[i].pid = i+1;
        printf("Enter Arrival Time, Burst Time, Priority for P%d: ", i+1);
        scanf("%d %d %d", &p[i].arrival, &p[i].burst, &p[i].priority);
    }
}

int main() {
    int n, choice;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    Process p[n];
    inputProcesses(p, n);

    printf("\nChoose Scheduling Algorithm:\n");
    printf("1. FCFS\n2. SJF (Non-Preemptive)\n3. Round Robin\n4. Priority\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1: fcfs(p, n); break;
        // other algorithms later
        default: printf("Invalid choice!\n");
    }

    return 0;
}
