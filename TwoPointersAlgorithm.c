#include <stdio.h>

int arr[8] = {1, 4, 3, 9, 7, 10, 1, 12};
int size = sizeof(arr) / sizeof(arr[0]);

void sort_func(int *Arr)
{
    int temp_value;
    int *temp = &temp_value;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                *temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = *temp;
            }
        }
    }
}

void print_array(int *Arr)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\n");
}

void find_pairs(int *Arr, int val)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (Arr[i] + Arr[j] == val)
            {
                printf("We have %d: %d + %d\n", val, Arr[i], Arr[j]);
            }
        }
    }
}

int main()
{
    int val = 0;
    printf("Enter val:");
    scanf("%d",&val);

    sort_func(arr);          // Сортування
    printf("Sorted array: ");
    print_array(arr);        // Вивід масиву

    find_pairs(arr, val);    // Пошук пар, сума яких дорівнює val

    return 0;
}
