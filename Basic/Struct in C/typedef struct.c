//
// Created by tkach on 24.08.2026.
//
#include <stdio.h>
struct Student
{
    char name[50];
    int age;
    float gpa;
};
typedef struct Student St;

int main()
{
    St student1;
    //snprintf(student1.name,sizeof(student1.name),"RAM");

    student1.age = 20;
    student1.gpa = 9.5;

    printf("Name %s\n",student1.name);
    printf("Age %d\n",student1.age);
    printf("GPA %.2f\n",student1.gpa);


}