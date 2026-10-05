//
// Created by tkach on 23.08.2026.
//

#include <stdio.h>
int main()
{
    int x = 5;
    int *pX = &x;

    printf("Value of x:%d\n",x);
    printf("Address of &x:%p\n",&x);
    printf("Address of pX:%p\n",pX);
    printf("Value inside of pX: %d\n",*pX);

    // Right now I need to change value '25' to '100' with 'pX'

    *pX = 100; // go to the address 'pX = &x' and write '100' there
    printf("Value inside of pX: %d\n",*pX);

}
