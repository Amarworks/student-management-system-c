#include <stdio.h>
#include "../include/student.h"

struct Student students[100];
int studentCount = 0;

int main() {

    int choice;

    printf("1 Add Student\n");
    printf("2 Exit\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice){

    case 1:
        printf("Enter Students ID: ");
        scanf("%d", &students[studentCount].id);

        printf("Enter Student name: ");
        scanf("%s", students[studentCount].name);

        printf("Enter Age: ");
        scanf("%d", &students[studentCount].age);

        printf("Enter Marks: ");
        scanf("%f", &students[studentCount].marks);

        printf("\nStudent Details\n");
        printf("ID: %d\n", students[studentCount].id);
        printf("Student name: %s\n", students[studentCount].name);
        printf("Age: %d\n", students[studentCount].age);
        printf("Marks: %.2f\n", students[studentCount].marks);

        studentCount++;
        break;

    case 2:
        return 0;

    default:
        printf("Invalid choice\n");
    }

    return 0;
}