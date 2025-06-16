#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void gerericSwap(void*a, void*b, int size)
{
    void* tempMemory = malloc(size);
    memcpy(tempMemory,a,size);
    memcpy(a,b,size);
    memcpy(b,tempMemory,size);
    printf("Address of a:%p\n",&a);
    printf("a:%p\n",a);
    printf("\n");

    printf("Address of b:%p\n",&b);
    printf("b:%p\n",b);
    free(tempMemory);


}
int main()
{
    int num1 = 5, num2 = 7;
    gerericSwap(&num1, &num2,sizeof(int));
}
