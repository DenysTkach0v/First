#include <stdio.h>
int main()
{
    int x = 10;
    int *y = &x;
    printf("%d\n",y);

    y++;
    printf("%d",y);

}