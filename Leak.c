#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *arr = malloc(7 * sizeof(int)); // виділили пам'ять
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
        printf("%d\n", arr[i]);
    }

     //free(arr);   // ← спеціально закоментовано, щоб створити витік

    return 0; // програма завершується, але пам'ять не звільнена
}

