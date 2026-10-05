//
// Created by tkach on 04.10.2026.
//
#include <stdio.h>
int main()
{
    int m = 300;
    double fx = 300.00006;
char cht = 'z';

    printf("%p\n", &m);
    printf("%p\n", &fx);

    int *ptr = &m;
    printf("Value of m via ptr:%d\n",*ptr);

    double *ptrFx = &fx;
    printf("Value of fx via ptr:%f\n",*ptrFx);

    char *ptrCht = &cht;
    printf("Value of cht via ptr:%c\n",*ptrCht);

    printf("\v");

    printf("\n Using & and * operator :\n");
    printf("-----------------------------\n");
    printf(" value at address of m = %d\n", *(&m));   // Print the value at the address of m
    printf(" value at address of fx = %f\n", *(&fx)); // Print the value at the address of fx
    printf(" value at address of cht = %c\n", *(&cht)); // Print the value at the address o

    printf("\n Using only pointer variable :\n");
    printf("----------------------------------\n");
    printf(" address of m = %p\n", ptr);  // Print the address stored in pt1
    printf(" address of fx = %p\n", ptrFx); // Print the address stored in pt2
    printf(" address of cht = %p\n", ptrCht); // Print the address stored in pt3
}