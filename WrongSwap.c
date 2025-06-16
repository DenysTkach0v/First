#include <stdio.h>
void swap(int a, int b)
    {
        int temp = a;
        a = b;
        b = temp;

    printf("Inside swap(): a = %d, b = %d\n", a, b);
    }
int main(void)
{
    int x = 1; int y=2;
    printf("Before swap(): x = %d, y = %d\n", x, y);
    swap(x, y); // Передаємо копії значень
    printf("After swap(): x = %d, y = %d\n", x, y); // x і y залишаються незміннимиreturn 0;
}

// Інший варіант

void SWAP(int a, int b)
{
    int *temp = a;
    a = b;
    b = temp;
    printf("Inside swap(): a = %d, b = %d\n", a, b);

}