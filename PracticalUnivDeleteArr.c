//
// Created by tkach on 18.12.2025.
//
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

void* insert(void* arr, unsigned size, unsigned idx,unsigned elem_size);
int Arr[]={90,80,100};
int main()
{
    int asked_number=0;
    printf("Enter index:");
    scanf("%d",&asked_number);
    int *result = (int*)insert(Arr,12,asked_number,sizeof(int));

}
void* insert(void* arr, unsigned size, unsigned idx,unsigned elem_size)
    {
    unsigned new_size=size-elem_size;
        void* newArr = malloc(new_size);
        if (!newArr) return NULL;
    memcpy(newArr,arr,idx*elem_size); // TO | FROM | HOW MANY?
    memcpy((char*)newArr + idx * elem_size,(char*)arr+(idx+1)*elem_size,size-(idx*elem_size)-elem_size);
    int* tempPtr = (int*)newArr;
    int count = (size - 4) / sizeof(int);

    for (int i=0;i<count;i++)
    {
        printf("%d ", tempPtr[i]);
    }
    printf("\n");

    return newArr;

    }