#include <stdio.h>

int main()
{
    int *a = 30;
    int *b = 20;
    int temp;
    temp = *a;
    *a = *b;
    b = temp;

    printf("a=%p\n",&a);

    printf("b=%p\n",&b);
return 0;

    // printf("before swaping:\t");

    // printf("a=%d\t",a);
    // printf("b=%d\t",b);
    // printf("\n");

    // temp = a;
    // a = b;
    // b = temp;
    // printf("after swaping:\t");

    // printf("a=%d\t",a);
    // printf("b=%d\t",b);
}