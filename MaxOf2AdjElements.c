#include <stdio.h>
int Max(int *array, int index,int size)
{
    if (size<2)
    {
        return 0;
    }
    if (index >= size-1)
    {
        return 0;
    }

int sum = *(array+index)+ *(array+index+1);
    int nextMax = Max(array,index+1,size);
    return (sum>nextMax)? sum: nextMax;


}
int main()
{
    int arr[5]={122,2,444,7,8};
    int result = Max(arr,0,5);
    printf("%d\n",result);
    return 0;
}