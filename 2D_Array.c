//
// Created by denys on 23.01.26.
//
#include <stdio.h>
#include <stdlib.h>
void freeMatrix(int** a, int rows)
{
 int i;
 for (i=0;i<rows;i++) {
  free(a[i]);
 }
 free(a);
}

void print2DDynamicMatrix(int** a, int rows, int columns) {
 int i, j;
 for (i=0;i<rows;i++) {
  for (j=0;j<columns;j++) {
   printf("%d\t", a[i][j]);
  }
  printf("\n");
 }
}

int** allocate2DMatrix(int rows, int cols) {
 int**a;
 int i;
 a = (int**)calloc(rows,sizeof(int*));
 if (!a) return NULL;
 for (i=0; i<rows;i++) {
 // printf("Enter number of columns for row %d: ",i+1);
//  scanf("%d",&cols);
  a[i]=(int*)calloc(cols,sizeof(int));
  if (!a[i]) {
   freeMatrix(a,rows);
   return NULL;
  }
 }
 return a;
}
void fillMatrix(int** a, int rows, int columns) {
 int i,j;
 printf("Please enter values for the matrix:\n");
 for (int i=0;i<rows;i++) {
  for (int j=0;j<columns;j++) {
   printf("Element [%d][%d]:",i,j);
   scanf("%d",&a[i][j]);
  }
  printf("\n");
 }
}

int main()
{
 //int **a;
 char answer[50];
 int ** myMatrix;
 int rows, cols;

 printf("Enter number of rows for the 2D Matrix : ");
 scanf("%d",&rows);

 printf("Enter number of columns for the 2D Matrix : " );
 scanf("%d",&cols);



 myMatrix =allocate2DMatrix(rows,cols);
 fillMatrix(myMatrix,rows,cols);
 print2DDynamicMatrix(myMatrix,rows, cols);
 printf("Do you want to change matrix , y/n?: ");
 scanf("%s",answer);
 while (answer[0] == 'y' || answer[0] == 'Y') {
freeMatrix(myMatrix,rows);


 printf("Enter NEW number of rows:");
  scanf("%d",&rows);

  printf("Enter NEW number of columns:");
  scanf("%d",&cols);

  printf("Do you want to change matrix , y/n?: ");
  scanf("%s",answer);
myMatrix=allocate2DMatrix(rows,cols);
  fillMatrix(myMatrix,rows,cols);

  print2DDynamicMatrix(myMatrix,rows, cols);
 }



}