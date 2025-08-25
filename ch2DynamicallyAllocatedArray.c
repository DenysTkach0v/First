#include <stdio.h>
#include <stdlib.h>
void printArray(int *ptr, int size) {
    int i;
    printf("Printing %d elements\n", size);
    for (i = 0; i < size; i++) {
        printf("grades[%d] - %d\n ",i, ptr[i]);

    }
    printf("Done\n");
}
int main() {
    int *grades;
    int arraySize;
    printf("Enter the number of grades that you have: ");
    scanf("%d",&arraySize);
    grades = (int*)malloc(sizeof(int)*arraySize);
    if (grades == NULL) {
        printf("Memory allocation failed for grades\n");
        return 1;
    }
    for (int i = 0; i < arraySize; i++) {
        printf("grade[%d]: ", i);
        scanf("%d",&grades[i]);
    }
    printArray(grades, arraySize);
    free(grades);
    return 0;
}