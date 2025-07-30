#include <stdio.h>
#include <stdlib.h>

// Cross-platform executable paths
#ifdef _WIN32
    #define FCFS_EXEC "fcfs\\fcfs.exe"
    #define SJF_EXEC "sjf\\sjf.exe"
    #define RR_EXEC "round_robin\\rr.exe"
    #define PRIORITY_EXEC "priority\\priority.exe"
#else
    #define FCFS_EXEC "./fcfs/fcfs"
    #define SJF_EXEC "./sjf/sjf"
    #define RR_EXEC "./round_robin/rr"
    #define PRIORITY_EXEC "./priority/priority"
#endif

int main() {
    int choice;

    while(1) {
        printf("\n===== CPU Scheduling Simulator =====\n");
        printf("1. First Come First Serve (FCFS)\n");
        printf("2. Shortest Job First (SJF - Non Preemptive)\n");
        printf("3. Round Robin\n");
        printf("4. Priority Scheduling\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                system(FCFS_EXEC);
                break;
            case 2:
                system(SJF_EXEC);
                break;
            case 3:
                system(RR_EXEC);
                break;
            case 4:
                system(PRIORITY_EXEC);
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
