#include <stdio.h>
#include "../include/student.h"

struct Student students[100];
int studentCount = 0;

int main() {

    int choice;

    while (1) {

        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Add Student selected\n");
                break;

            case 2:
                printf("View Students selected\n");
                break;

            case 3:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}