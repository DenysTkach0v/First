//
// Created by denys on 23.01.26.
//
#include <stdio.h>
#include <stdlib.h>
int** allocate2DMatrix() {
 int**a;
 int rows, cols;
 int i;
 printf("Enter number of rows : ");
 scanf("%d",&rows);
 a = (int**)calloc(rows,sizeof(int*));
 if (!a) return NULL;
 for (i=0; i<rows;i++) {
  printf("Enter number of columns for row %d: ",i+1);
  scanf("%d",&cols);
  a[i]=(int*)calloc(cols,sizeof(int));
  if (!a[i]) {
   // TODOO >> freeMatrix;
   return NULL;
  }
 }
}
int main()
{
 int ** myMatrix;
 int rows, cols;

 printf("Enter number of rows for the 2D Matrix : ");
 scanf("%d",&rows);

 printf("Enter number of columns for the 2D Matrix : " );
 scanf("%d",&cols);

 myMatrix =allocate2DMatrix();

}