#include <stdio.h>

float arr[5] = {1.8, 2.7, 3.6, 4.5, 5.6};
int SIZE = sizeof(arr) / sizeof(float);

int Rcs(float *Arr, int size) {
    if (size <= 1) return 1;  // базовий випадок

    int integer1 = (int)Arr[0];
    int integer2 = (int)Arr[1];

    double fraction1 = Arr[0] - integer1;
    double fraction2 = Arr[1] - integer2;

    if (integer1 >= integer2) {
        printf("failed (int %d >= %d)\n", integer1, integer2);
        return 0;
    }
    if (fraction1 <= fraction2) {
        printf("failed (frac %.2f <= %.2f)\n", fraction1, fraction2);
        return 0;
    }

    // рекурсивно перевіряємо решту масиву (починаючи з наступного елемента)
    return Rcs(Arr + 1, size - 1);
}

int main() {
    if (Rcs(arr, SIZE))
        printf("success\n");
    return 0;
}
