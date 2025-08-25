#include  <stdio.h>
int ChangeToBinaryNumber(int decimalNumber);

int ChangeToBinaryNumber(int decimalNumber) {
    if (decimalNumber == 0) return 1;

    ChangeToBinaryNumber(decimalNumber / 2);   // recursive call
    printf("%d", decimalNumber % 2);           // print remainder
}

int main() {
    int dec = 0;
    printf("Enter a Binary Number : ");
    scanf("%d",&dec);
    //comment po prikili\i
    ChangeToBinaryNumber(dec);
    return 0;
}