//
// Created by denys on 23.01.26.
//
#include <stdio.h>
#include <stdlib.h>
int main()
{
int* arr[5];
    int i;
    for (i = 0; i < 5; i++) {
    arr[i] = (int*)calloc(3,sizeof(int));
    }
    arr[1][1] = 25;
    printf("arr[1][1]=%d\n",arr[1][1]);
    scanf("%d",&arr[0][1]);
    printf("arr[0][1]=%d\n",arr[0][1]);
return 0;
}