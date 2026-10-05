 //
// Created by tkach on 05.10.2026.
//
#include <stdio.h>
void calculate_sum();
int sum;
int main()
{
    int num1,num2;

   int  *ptr1 = &num1;
    int *ptr2 =&num2;
    printf("Enter first num:");
    scanf("%d",ptr1);
    printf("Enter second num:");
    scanf("%d",ptr2);
    calculate_sum(ptr1,ptr2);

}
void calculate_sum(int *ptr1, int *ptr2)
{

    sum = *(ptr1) + *(ptr2);
    printf("sum: %d",sum);
}