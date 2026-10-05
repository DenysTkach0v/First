//
// Created by tkach on 23.08.2026.
//
#include <stdio.h>
int main()
{
int x  = 10;
    int *pX = &x; // Address of x set to *pX pointer
    int y = *pX; // we take a variable of pX
    printf("%d",y);
}
