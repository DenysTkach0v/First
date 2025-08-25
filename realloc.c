#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2;
    int size = 3, new_size = 0;
    char answer;

    ptr1 = malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++) {
        printf("Grades[%d] = ", i);
        scanf("%d", &ptr1[i]);
    }

    printf("Your grades:\n");
    for (int i = 0; i < size; i++) {
        printf("Grades[%d] = %d\n", i, ptr1[i]);
    }

    printf("Have your grades added? (Y/N): ");
    scanf(" %c", &answer);

    if (answer == 'Y' || answer == 'y') {
        printf("How many new grades do you have?: ");
        scanf("%d", &new_size);

        ptr2 = realloc(ptr1, sizeof(int) * (size + new_size));

        for (int i = size; i < size + new_size; i++) {
            printf("Grades[%d] = ", i);
            scanf("%d", &ptr2[i]);
        }

        size += new_size; // тепер size = загальна кількість
    }
    else {
        ptr2 = ptr1; // якщо не додавали, просто працюємо з ptr1
    }

    printf("All grades:\n");
    for (int i = 0; i < size; i++) {
        printf("ptr2[%d] = %d\n", i, ptr2[i]);
    }

    free(ptr2);
    return 0;
}
