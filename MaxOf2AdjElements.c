#include <stdio.h>
int arr[4]={2,4,7,8};
int max=0;
int Max(int *array, int index,int size)
{
    if (index >= size-1)
    {
        return max;
    }
    if (arr[index]+arr[index+1]>max)
    {
        max = arr[index]+arr[index+1];

    }



return Max(array,index+1,size);
}
int main()
{
    Max(arr,0,4);
    printf("%d\n", Max(arr, 0, 4));
}