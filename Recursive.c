#include <stdio.h>

void rcs(int x)
{
    if(x == 4) return;
    int arr[4]={1,2,3,0};

    printf("Down: x = %d\n", arr[x]);

        rcs(x+1);

    printf("Up: x = %d\n", arr[x]);
}

int main()
{
    rcs(0); // запуск рекурсии
    return 0;
}