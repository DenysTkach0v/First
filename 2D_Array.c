//
// Created by denys on 23.01.26.
//
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **a;
    int rows, cols;
    int i;
    printf("please enter number of rows:\n");
    scanf("%d",&rows);
    a = (int**)calloc(rows,sizeof(int*));
    for (i = 0; i < rows; i++) {
        printf("Enter numbers of columns:");
        scanf("%d",&cols);
        a[i]=(int*)calloc(cols,sizeof(int));
    }

    for (int j=0;j<rows;j++) {
        printf("%d\n",*a[j]);
    }
return 0;
}