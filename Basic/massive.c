#include <stdio.h>
#include <stdint.h>

int16_t find_max(const int16_t *data, uint32_t size)
{
    if (size == 0) return 0; // Check size
    int16_t Res = data[0];
    for (int i = 0 ; i < size; i++)
    {
        if (Res<data[i])
        {
            Res = data[i];
        }
    }
return Res;
}
int main()
{
    int16_t Arr[]={5,100,-30,400};
    uint32_t size = sizeof(Arr) / sizeof(Arr[0]);
    int16_t *Var = Arr; // Make a pointer to Arr , cuz we need an equivalent cast type for argument
    int16_t max_val = find_max(Var, size);
    printf("Max: %d\n",max_val);
    // int arr[] = {5,3,2,10,4};
    //
    // int n = sizeof(arr)/sizeof(arr[0]);
    //
    // int res = arr[0];
    //
    // for (int i = 0; i < n; i++)
    // {
    //     if (res<arr[i])
    //         res = arr[i];
    // }
    // for (int i = 0; i<n; i++)
    // {
    //
    // printf("%d, ",arr[i]);
    // }
    // printf("\n");
    //
    // printf("The max: %d" ,res);
}
