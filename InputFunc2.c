#include <stdio.h>
#define SIZE 4
void inputArr(int* arr, int size)
{

    for (int i=0;i<size;i++)
    {
        printf("Enter value %d:", i + 1);
        scanf("%d",&arr[i]);
    }
    printf("Your Arr:");
    for (int j=0; j<size; j++)
    {
        printf(" %d ",arr[j]);
    }
}
void MaxArr(int *arr, int size)
{
    int Max;
    Max=arr[0];
    for (int n = 1; n<size;n++)
    {
        if (arr[n]>Max)
        {
            Max=arr[n];
        }
    }
    printf("\nMax of your Arr is: %d", Max);

}
int main()
{
    int Arr[SIZE]={77,79,65,95};
    inputArr(Arr,SIZE);
    MaxArr(Arr,SIZE);

}
