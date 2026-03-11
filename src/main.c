#include <stdio.h>
#include "../include/student.h"

int main() {

    struct Student s1;

    printf("Enter Student ID: ");
    scanf("%d", &s1.id);

    printf("Enter Age: ");
    scanf("%d", &s1.age);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    printf("\nStudent Details\n");
    printf("ID: %d\n", s1.id);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}