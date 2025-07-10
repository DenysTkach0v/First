#include <stdio.h>

void rcs(int x)
{
    printf("Down: x = %d\n", x);

    if(x > 1)
        rcs(x-1);

    printf("Up: x = %d\n", x);
}

int main()
{
    rcs(4); // запуск рекурсии
    return 0;
}