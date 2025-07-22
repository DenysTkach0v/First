#include <stdio.h>
void PrintFromArr(int size,int *arr)
{
 for (int i = 0; i<size; i++ )
 {
     printf("%d ",arr[i]);
 }
}
int main()
{
    int arr[]={2,5,6,7};
    PrintFromArr(4,arr);

}
