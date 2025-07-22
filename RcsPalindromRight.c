#include <stdio.h>

//#define SIZE 5
int SIZE = 0;

// Function to fill an existing array
void createArray(int *arr);
void printArr(int *arr, int size);

void rcs(int *arr, int index, int size, int *ispal);

int main() {
    printf("Enter size of arr: ");
    scanf("%d", &SIZE);

    int arr[SIZE];  // Array declared після SIZE
    createArray(arr);  // Спочатку заповнюємо
    printArr(arr, SIZE);

    int ispal = 1;
    rcs(arr, 0, SIZE, &ispal);  // Потім перевіряємо

    if (ispal) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}

void printArr(int *arr, int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void createArray(int *arr) {
    printf("Enter %d elements to your array:\n", SIZE);
    for(int i = 0; i < SIZE; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}



void rcs(int *arr, int index, int size, int *ispal)
{

    if (index == size) return;  // Базовий випадок — вихід з рекурсії

    printf("Down: x = %d\n", arr[index]);
    rcs(arr, index + 1, size,ispal);  // Рекурсивний виклик
    if (index<size/2 && arr[index]!=arr[size-1-index])
    {
        *ispal=0;
    }
    printf("Up: x = %d\n", arr[index]);
}