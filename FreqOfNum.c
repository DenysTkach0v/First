#include <stdio.h>
int arr[] = {1, 2, 1, 3, 2};
int size = sizeof(arr) / sizeof(arr[0]);

void Freq(int num)
{
    if (num >= size) return; // базовий випадок (зупинка рекурсії)
    int n = 0;


    for (int i=0; i<size; i++)
    {

        if (arr[num]==arr[i])
        {

            n++;
        }


    }
    printf("Frequency of %d is %d\n", arr[num], n);

    Freq(num+1);
    //printf("Element '%d' has frequency:%d",arr[pos],n);
}
int main()
{

Freq(0);
    return 0;

}
