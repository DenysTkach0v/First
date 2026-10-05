// #include <stdio.h>
// void recs(int num);
// int main()
// {
//  recs(1);
// }
// void recs(int num)
// {
//     if (num>5) return;
//           printf("%d ",num);
//   recs(num+1);
//
// }

#include <stdio.h>

#define SIZE 5

// Array of integers
// We will return the address of the first element
int *createArray();
void printArr(int *arr, int size);

int main() {
    int *arr;
    arr = createArray();
    printArr(arr, SIZE);

    return 0;
}

void printArr(int *arr, int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int *createArray() {
    int i;
    static int myArr[SIZE];
    printf("Enter %d elements to your array.\n", SIZE);
    for(i = 0; i < SIZE; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &myArr[i]);
    }

    return myArr;
}