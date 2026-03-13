#ifndef STUDENT_H
#define STUDENT_H

#define MAX_STUDENTS 100   /* maximum students the system can hold */
#define NAME_LEN      50 
#define DATA_FILE     "data/students.dat"

struct Student {
    int id;
    char name[50];
    int age;
    float marks;
};

#endif