#include <stdio.h>
#define MAX 10

int main() 
{
	int n = MAX;
	int A[MAX] = {3,-4,2,-5,2,-6,7,-1,-9,4};
	int low = 0;
	int high = n-1;
	int temp, i;
	
	while (low < high)
    {
        if (A[low]<0)
            low++;             
        else if (A[high]> 1)
            high--;             
        else
        {
    
            temp = A[low];
            A[low] = A[high];
            A[high] = temp;
            low++;
            high--;
        }
    }
    printf("Sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }

}
