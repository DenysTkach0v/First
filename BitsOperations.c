#include <stdio.h>
#include <stdint.h>
int main()
{
//     unsigned char flags =5; //101
//     unsigned char mask =4; // 100
//
//     unsigned char res = flags & mask;
// printf("res = %d",res);

    unsigned char x = 40; // 00101000
    printf("x=%d\n",x);

    x= x>>1; //00101000 → 00010100
    printf("x=%d\n",x);

    x= x>>2; //00010100 → 00000101
    printf("x=%d\n",x);

    x= x>>2; //00000101 → 00000001
    printf("x=%d\n",x);



}