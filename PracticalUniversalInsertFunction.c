//
// Created by denys on 02.12.25.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int new_num;
    int index = 2;
    printf("Enter Your num:");

    scanf("%d", &new_num);
    printf(" Your num: %d\n", new_num);

    int arr[]={8,6,7};
    int pos = sizeof(arr)/sizeof(arr[0]);
    printf("the last index of array = %d\n",pos-1);
    int n = sizeof(arr)/sizeof(arr[0]);
    int *ptr = (int*)malloc(sizeof(int)*(n+1));
    if (ptr == NULL) {
        printf("Allocation Failed");
        exit(0);
    }
    //
    for (int i =0; i<index;i++) {
        ptr[i]=arr[i];
    }
    ptr[index] = new_num;
n = sizeof(arr)/sizeof(arr[0]);
    for (int i=index; i<n;i++) {
        ptr[i+1]=arr[i];
    }
     for (int i = 0; i < n+1; i++) {
        printf("%d ",ptr[i]);
    }
    // for (int i =0;i<6;i++) {
    //     printf("%d ",ptr[i]);
    // }
free(ptr);
    return 0;
}
