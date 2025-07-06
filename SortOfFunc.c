#include <stdio.h>
void SortFunc(int count, int *arr);
// не ставимо змінні в глобал - не оптимізуємо память int arr[]={2,0,10,5,-1,-5,-125,3,-3};
 //  int size=sizeof(arr)/sizeof(int); - теж саме!!!
int arr[]={2,0,10,5,-1,-5,-125,3,-3};
int size=sizeof(arr)/sizeof(int);
int main()
{

SortFunc(size-1,arr);
return 0;
}
void SortFunc(int count, int *arr)
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