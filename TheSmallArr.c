#include <stdio.h>
int main()
{
   int  arr[]={1,0,-3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<size;i++)
    {
        if (arr[i-1]<arr[i]>arr[i+1])
        {

        }
        //printf("%d",i);
    }
}