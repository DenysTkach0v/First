//
// Created by tkach on 05.10.2026.
//
#include <stdio.h>
#include <stdlib.h> // atoi
int main()
{
    int num1;
    int num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    char buffer[50];
    printf("first num:");
fgets(buffer, sizeof(buffer),stdin);
    num1 = atoi(buffer); // Change text to num;

    printf("second num:");
fgets(buffer,sizeof(buffer),stdin);
    num2 = atoi(buffer);

    printf("\nPrint via pointers:\n");
    printf("first num:%d\n",*ptr1);
    printf("second num:%d\n",*ptr2);

    printf("----Sum of two nums:----\n");
    int sum = *ptr1 + *ptr2;
    printf("%d",sum);
return 0;
}