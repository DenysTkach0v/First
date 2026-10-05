#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STUDENTS 30
#define MAX_COURSES 5
#include <locale.h>
typedef struct student {
    char name[50];
    int id;
} Student;

typedef struct course {
    char name[50];
    float grade;
    int students;
    Student *students_list;
} Course;

typedef struct school {
    char name[20];
    float grade;
    int students;
    Course *courses_list;
} School;

Student* createStudent(void) {
    Student* newStudent = (Student*)malloc(sizeof(Student));
    if (!newStudent) return NULL;

    printf("Enter student name: ");
    scanf("%49s", newStudent->name);
    printf("Enter student ID: ");
    scanf("%d", &newStudent->id);

    return newStudent;
}

Course* createCourse(void) {
    Course* newCourse = (Course*)malloc(sizeof(Course));
    if (!newCourse) return NULL;

    printf("Enter course name: ");
    scanf("%49s", newCourse->name);
    printf("Enter number of students: ");
    scanf("%d", &newCourse->students);

    newCourse->students_list = (Student*)malloc(sizeof(Student) * newCourse->students);

    for (int i = 0; i < newCourse->students; i++) {
        printf("\nEnter details for student #%d\n", i + 1);
        Student* s = createStudent();
        if (s) {
            newCourse->students_list[i] = *s; // Copy struct contents
            free(s);                          // Free the temporary container
        }
    }
    return newCourse;
}

int main(void) {
    setlocale(LC_ALL,"Ukrainian");
    Course* myCourse = createCourse();
    if (!myCourse) {
        printf("Помилка виділення пам'яті!\n");
        return 1;
    }

    // 2. Виводимо інформацію про курс для перевірки
    printf("\n=== RESULT ===\n");
    printf("Назва курсу: %s\n", myCourse->name);
    printf("Кількість студентів: %d\n", myCourse->students);
    printf("---------------------------------\n");

    // 3. Проходимо циклом по динамічному масиву студентів
    for (int i = 0; i < myCourse->students; i++) {
        printf("Студент #%d: %-15s (ID: %d)\n",
               i + 1,
               myCourse->students_list[i].name,
               myCourse->students_list[i].id);
    }


    // 4. Звільняємо пам'ять у правильному порядку (від внутрішнього до зовнішнього)
    free(myCourse->students_list); // Спочатку масив студентів
    free(myCourse);                // Потім сам курс

    return 0;
}