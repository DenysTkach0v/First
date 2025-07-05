#include <stdio.h>
#define size 7
void SortFunc();

int main()
{
    int arr[]={2,0,10,5,-1,-5,-125};;

SortFunc(size-1,arr);

}
void SortFunc(int count, int arr[])
{
    int temp = 0;
    int n=0;
    while (n!=count)
    {
        n+=1;
        for (int i=0; i<size-1;i++)
        {
            if (arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;

            }
        }
    }
    for (int i=0; i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}