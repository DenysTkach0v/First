#include <stdio.h>

void reverseArray(char *arr, int left, int right) {
    if (left >= right) {
        return; // Базовий випадок
    }

    // Обмін елементів
    char temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    // Рекурсивний виклик
    reverseArray(arr, left + 1, right - 1);
}

int main() {
    char arr[6] = {'f', 's', 'd', 'a','w','p'};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Виведемо масив до реверсу
    printf("Before: ");
    for (int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    // Виклик рекурсивної функції
    reverseArray(arr, 0, size - 1);

    // Виведемо масив після реверсу
    printf("After: ");
    for (int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}