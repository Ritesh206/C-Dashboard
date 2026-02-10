#include <stdio.h>

int main()
{
    int n, i, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int start = 0, end = n - 1;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}

