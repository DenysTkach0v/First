#include <stdio.h>

int main()
{
    int m = 29;
    int *ab =&m;
printf("%d\n", *ab);
    *ab = 34;
    printf("%d", *ab);

    return 0;
}