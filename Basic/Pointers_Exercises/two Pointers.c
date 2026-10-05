//
// Created by tkach on 23.08.2026.
//
#include <stdio.h>
int main()
{
    int x = 5;
    int *p1 = &x;
    int *p2 = &x;
    *p1 = 20;
    printf("Value inside of p1:%d\n",*p1);
    printf("Value inside of p2: %d",*p2);

}
