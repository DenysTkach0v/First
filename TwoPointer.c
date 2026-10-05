//
// Created by tkach on 12.01.2026.
//
#include <stdio.h>
#include <stdlib.h>
void connectToBuffer(int **ptr)
{
    static int internalBuffer[]={10,20,30};
    *ptr = internalBuffer;
}
int main()
{
    int *myData = 10;
    connectToBuffer(&myData);
    printf("First element %d\n", myData[2]);
    return 0;
}