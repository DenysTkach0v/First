#include <stdio.h>
int main()
{
    int size=0;
    int arr1[100];
    int num = 0;
    int sum=0;


    printf("hello! Enter how many num in arr must be:\n");
    scanf("%d",&size);

    for (int i=0; i<size;i++)
    {
        printf("Enter %d:",i+1);
        scanf("%d",&num);
        arr1[i]=num;

    }

    for (int i=0; i<size;i++)
    {
        printf("%d ",arr1[i]);


    }

    if (size%2==0) // for even numbers - we should know last on item in arr
    {
        for (int i = 1; i<size; i++)
        {
            if (arr1[i]==arr1[i+1]+arr1[i-1])
            {
                return 1;
            }
            else
            {
                return 0;

            }
        }

    }
    else if (size%2==1) // for odd numbers - the same occasion
    {
        for (int i = 1; i<size-1; i++)
        {
            if (arr1[i]==arr1[i+1]+arr1[i-1])
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}
