//
// Created by tkach on 16.12.2025.
//
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
void* insert(void* arr, unsigned size, unsigned idx, void* source,unsigned sourceSize);
int Arr[]={90,80,100};
int Source = 5;
int main()
{
    int* result =(int*) insert(Arr,12,1*sizeof(int),&Source,sizeof(Source));
}
void* insert(void* arr, unsigned size, unsigned idx, void* source,unsigned sourceSize)
{
   void* newArr = malloc(size+sourceSize);
    if (!newArr) return NULL;
    memcpy(newArr,arr,idx); // TO | FROM | HOW MANY?
    memcpy((char*)newArr+idx,source,sourceSize);
    memcpy((char*)newArr+idx+sourceSize,(char*)arr+idx,size-idx);
    printf("Debug inside function: ");

    // CAST to (int*) so the compiler knows we are printing integers
    int* tempPtr = (int*)newArr;

    // We calculate the number of elements: (size + sourceSize) / sizeof(int)
    int count = (size + sourceSize) / sizeof(int);

    for (int i = 0; i < count; i++)
    {
        // Removed '&' to print the VALUE, not the address
        printf("%d ", tempPtr[i]);
    }
    printf("\n");

    // DO NOT free(newArr) here if you want to return it!
    return newArr;
}
