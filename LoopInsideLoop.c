#include <stdio.h>
int main()
{
    int arr[8]={1,4,3,9,7,10,1,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = 12;
    for (int i=0;i<size;i++)
    {
        //printf("%d ",arr[i]);

        //printf("%d ",i);
        for (int j=i+1; j<size;j++)
        {
            printf("%d : %d\n", arr[i],arr[j]);
            if (val==arr[i]+arr[j])
            {
            printf("We have %d: %d + %d\n",val, arr[i],arr[j]);
                if (arr[i]+arr[j]==val && arr[j]+arr[i]==val)
                {
                    printf("We have 2 same numbers\n");
                }
            }
        }
    }
}