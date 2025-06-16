#include <stdio.h>
void Swap(int *a, int *b)
{
    printf("before swaping: %d and %d\n",*a,*b);


    int temp = * a;
    *a = *b;
    *b= temp;
    printf("after swaping: %d and %d",*a,*b);

}
int main(void)
{
    int x =10;
    int y = 20;
    Swap(&x,&y);
    return 0;
}
//