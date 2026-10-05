#include <stdio.h>
void Left(int *arr, int index, int size)
{
if(index>=size) return;
printf("%d ",arr[index]);
Left(arr,index+1,size);
}

void Right(int *arr, int index, int size)
{
if(index<=-1) return;
printf("%d ",arr[index]);
Right(arr,index-1,size);
}

int main()
{
int Arr[5]={2,5,7,8,23};
int SIZE = sizeof(Arr)/sizeof(int);
Left(Arr,0,SIZE);
printf("\n");
Right(Arr,SIZE-1,SIZE);

}