#include <stdio.h>

void findTwoUnique(int arr[], int n) {
    int xorSum = 0, x = 0, y = 0,i;
    for ( i = 0; i < n; i++)
    {
	
      xorSum ^= arr[i];
    }
    // get rightsome set bit
    int setBit = xorSum & ~(xorSum - 1);

    for (i  = 0; i < n; i++){
        if (arr[i] & setBit)
            x ^= arr[i];
        else
            y ^= arr[i];
    }
    printf("Unique elements: %d and %d", x, y);
}

void main() {
    int arr[6] = {5, 3, 5, 4, 3, 6};
    findTwoUnique(arr, 6);
}
