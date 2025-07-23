#include <stdio.h>
int main()
{
    int p=0;
   int ARR[]={-1,2,-4,3,-7};
    int SIZE = sizeof(ARR)/sizeof(int);
    for (int i =0; i<SIZE;i++)
    {
        if (ARR[i]*ARR[i+1]>0)
        {
            p++;
        }


    }
    if (p>0)
    {
        return 0;
    }
 else
    {
        return 1;
    }
}