#include <stdio.h>
int main()
{
    int var = 5;
    int *ptr = &var;
    printf("%p",ptr);
    printf("\n");
    printf("%d",ptr);
    printf("\n");
    printf("%d",*ptr);


    return 0;
}