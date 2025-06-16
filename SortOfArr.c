#include <stdio.h>

#define SIZE 4  // Use #define to make it a compile-time constant
int findMax(int* arr, int size)
{
    int maxSoFar;
    int i;
    if (size<=0)
    {
        return -1;

    }
    maxSoFar = arr[0];
    for (i=1; i<size; i++)
    {
        if (arr[i]>maxSoFar)
        {
            maxSoFar = arr[i];
        }

    }
    printf("grade:%d",maxSoFar);
    return maxSoFar;
}
int main()
{
    int grades[SIZE] = {80, 85, 150, 90};  // Now this works because SIZE is a constant
    int maxGrade;

    maxGrade = findMax(grades,SIZE);
    //
    // for (int i = 1; i < SIZE; i++)  // Fixed: use SIZE instead of hardcoded
    // {
    //     if (grades[i]>maxGrade)
    //     {
    //         maxGrade = grades[i];
    //     }
    // }
    // printf("grades: %d\n",maxGrade);

    return 0;
}