//
// Created by denys on 23.01.26.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
void SwapColumns(int** a,int rows,int columns) {
 for (int i=0;i<rows;i++) {
 for (int j=0;j<columns;j++) {
  int temp = a[i][j];
  a[i][j] = a[i][columns-1];
  a[i][columns-1] = temp;

 }
  }
 }
void SwapTwoRows(int **a, int rows1, int rows2) {
 void* temp;
 temp = a[rows1];
 a[rows1] = a[rows2];
 a[rows2] = temp;

}
 void SwapRows(int** a,int rows, int columns) {
 for (int i=0;i<rows;i++) {
  for (int j=0;j<columns;j++) {
   int temp;
   temp = a[i][j];
   a[i][j] = a[rows-1][j];
   a[rows-1][j] = temp;
  }
 }
}
int** LowerTriangleMatrix(int rows)
{
 int i;
 int** newMatrix=(int**)malloc(rows*sizeof(int*)); // a = matrix of pointers

for (i=0;i<rows;i++) {

 newMatrix[i]=(int*)malloc((i+1)*sizeof(int)); // memory allocation
}
 return newMatrix;

}
void printTriangleMatrix(int** a, int rows) {
 int i,j;
 for (i=0;i<rows;i++) {
  for (j=0;j<=i;j++) {
   printf("%d\t",a[i][j]);

  }
  printf("\n");
 }
}




int main()
{
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

 printf("Do you want to use LowerTriangleMatrix func?:");
 scanf("%s",&answer);
 if (answer[0] == 'y' || answer[0] == 'Y')  {
  freeMatrix(myMatrix, rows);

myMatrix = LowerTriangleMatrix(rows);
  // fillMatrix(myMatrix,rows,cols);

 // SwapRows(myMatrix,rows,cols);
  print2DDynamicMatrix(myMatrix,rows, cols);

 }
 freeMatrix(myMatrix, rows);
return 0;
}