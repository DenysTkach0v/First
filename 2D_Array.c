//
// Created by denys on 23.01.26.
//
#include <stdio.h>
#include <stdlib.h>
int main()
{
int* arr[5];
    int i;
    int numbOfcolumns;
    for (i = 0; i < 5; i++) {
printf("Please enter the number of columns for this row: ");
        scanf("%d",&numbOfcolumns);
        arr[i]=(int*)calloc(numbOfcolumns,sizeof(int));
    }

return 0;
}