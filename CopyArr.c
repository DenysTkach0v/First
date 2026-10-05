//
// Created by tkach on 12.01.2026.
//
#include <stdio.h>
#include <stdlib.h>
void allocateAndCopyArray(int* original, int sizeOriginal, int **target)
{
    int i;
    *target = (int*)malloc(sizeOriginal*sizeof(int));
if (*target != NULL)
{
    for (i=0;i<sizeOriginal;i++)
        (*target)[i]=original[i];
}
}
int main()
{
    int i;
    int arrOriginal[3] = {7,5,4};
    int *copiedArr;
    allocateAndCopyArray(arrOriginal, 3, &copiedArr);
printf("Copied arr values:");
    for (i=0;i<3;i++)
    {
        printf("%d ",copiedArr[i]);
    }
    free(copiedArr);
}