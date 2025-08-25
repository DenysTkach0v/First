#include <stdio.h>
#define SIZE 4
void swap(int *val1, int *val2) {
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}
void swapArray(int *arr1, int *arr2) {
    int i;
    for (i=0;i<SIZE;i++) {
        swap(&arr1[i], &arr2[i]);
    }
}
void printArray(int *arr) {
    int i;
    for (i=0;i<SIZE;i++)
        printf("%d \t", arr[i]);
    printf("\n");
}
int main() {
    int arr1[SIZE]={1,2,3,4};
    int arr2[SIZE]={2,2,2,6};

    printf("Array Before Swap:\n");

    printArray(arr1);
    printArray(arr2);

    printf("\n");

    printf("Array AFTER Swap:\n");

    swapArray(arr1, arr2);
    printArray(arr1);
    //printf("\n");
    printArray(arr2);
}