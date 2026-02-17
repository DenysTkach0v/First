//
// Created by denys on 17.02.26.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STUDENTS 30
#define MAX_COURSES 5
typedef struct student {
char name[50];
    int id;

}Student;

typedef struct course {

    char name[50];
    float grade;
    int students;

  Student *students_list;  //Student students_list[MAX_STUDENTS];

    // students_list = (Student*)malloc(sizeof(Student*));
}Course;
typedef struct school {
    char name[20];
    float grade;
    int students;
    Course *courses_list;
}School;

int main() {
    //Student* pointer;
    Student p1 ={"Jake",101};
    Course c1; // c1 -
    School s1;

    c1.students_list=(Student*)malloc(MAX_STUDENTS*sizeof(Student));
    s1.courses_list=(Course*)malloc(MAX_COURSES*sizeof(Course));
    c1.students_list[0] = p1;
    s1.courses_list[0]=c1;
    printf("name: %s",s1.courses_list[0].students_list[0].name);

}