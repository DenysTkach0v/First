#include <stdio.h>

void increase(int num, int limit) {
    if (num > limit) return; // базовий випадок (зупинка рекурсії)

    printf("%d\n", num); // вивід поточного значення

    increase(num + 1, limit); // рекурсивний виклик з +1
}

int main() {
    int start = 1;
    int end = 5;

    increase(start, end);

    return 0;
}
