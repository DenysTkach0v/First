#include <stdio.h>
int main()
{
    float arr[5]={2.8,2.7,3.6,4.5,5.4};
    int SIZE = sizeof(arr)/sizeof(float);
    for (int i =0; i<SIZE-1;i++)
    {
        int integer1 = (int)arr[i];
        int integer2 = (int)arr[i+1];

        double fraction1 = arr[i] - integer1;
        double fraction2 = arr[i+1] - integer2;
        printf("Pair %d: int1=%d, frac1=%.2f \n" ,i, integer1, fraction1);

        if (integer1>=integer2)
        {
            printf("failed");
            return 0;
        }
        if (fraction1<=fraction2)
        {
            printf("failed");
            return 0;

        }

    }

printf("All good");
    return 1;
}


