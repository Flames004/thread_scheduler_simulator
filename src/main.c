#include <stdio.h>
#include <stdlib.h>

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
                system("./fcfs/fcfs");
                break;
            case 2:
                system("./sjf/sjf");
                break;
            case 3:
                system("./round_robin/rr");
                break;
            case 4:
                system("./priority/priority");
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
