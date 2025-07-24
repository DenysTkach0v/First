#include <stdio.h>
int ARR[]={-1,2,-4,3,-7};
int SIZE = sizeof(ARR)/sizeof(int);

int SingOfNum(int* arr, int index ,int size)
{
    if (index>=size-1){
    return 1; // ok if we reached to the end of arr

    }
    if (arr[index]*arr[index+1]>0)
    {
        return 0; // wrong
    }
    return SingOfNum(arr,index+1,size);

}

int main()
{
    int result = SingOfNum(ARR,0,SIZE);
    printf("%d",result);
}