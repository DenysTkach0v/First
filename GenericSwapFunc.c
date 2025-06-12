#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void swapInt(int* a, int* b)
// {
//
// }
// void swapDouble(double* a, double* b)
// {
//
// }
void universe(void* a , void* b, int size)
{
// size - specifies the number of bytes
    void* tempMemory = malloc(size);
    memcpy(tempMemory,a,size);
    memcpy(a,b,size);
    memcpy(b,tempMemory,size);

    free(tempMemory);
}
int main()
{
int num1 = 5, num2 =7;
    double average1 = 90.5, average2 = 89.7;

    printf("Before swap:\n");
    //printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("average1 = %.2f, average2 = %.2f\n", average1, average2);

    universe(&average1, &average2, sizeof(double));
    printf("After swap:\n");
    //printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("average1 = %.2f, average2 = %.2f\n", average1, average2);
    return 0;
}
