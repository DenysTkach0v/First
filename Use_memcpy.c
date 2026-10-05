//
// Created by tkach on 22.12.2025.
//
#include <stdio.h>
#include <string.h>
int main()
{
    // int Arr[]={10,20,30};
    //
    // memcpy(); // TO | FROM | HOW MANY BYTES
    char src[20]="He9lo";
    char dst[20]="Zrada";
    memcpy(dst,src,sizeof(src));
    printf("dst=%s\n",dst);
}