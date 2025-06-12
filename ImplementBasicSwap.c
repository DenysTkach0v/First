#include <stdio.h>
// int swapInts(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
//     printf("x: %d\n", *a);
//     printf("y: %d", *b);
//
// }
void swapIntsNoThird2 (int* a, int* b) {
    printf("Before swapping:\n a:%d\t",*a);
    printf("b:%d",*b);
    *a = *a * *b;
    *b = *a / *b;
    *a = *a / *b;
    printf("\nAfter swapping:\n a:%d\t",*a);
    printf("b:%d",*b);
}
int main()
{


    //swapInts(&x,&y);
    int a = 10, b = 20;
    swapIntsNoThird2(&a, &b);


}

// Implement Swap without Temporary Variable
