#include <stdio.h>
#define MAX 10

int main()
{
    int n = 6,i;
    int arr[MAX] = {0,0,1,0,1,1};
    int lo = 0, hi = n - 1, temp;

    while (lo < hi)
    {
        if (arr[lo] == 0)
            lo++;             
        else if (arr[hi] == 1)
            hi--;             
        else
        {
    
            temp = arr[lo];
            arr[lo] = arr[hi];
            arr[hi] = temp;
            lo++;
            hi--;
        }
    }

    printf("Sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

