#include <stdio.h>

int main() {
    int n1, n2;
    int i,j;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    int M[n1 + n2]; 
    int k = 0;

    int used[n2];
    for (i = 0; i < n2; i++)
        used[i] = 0;

    for (i = 0; i < n1; i++) {
        int found = 0;
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j] && used[j] == 0) {
                M[k++] = arr1[i] + arr2[j]; 
                used[j] = 1; 
                found = 1;
                break;
            }
        }
        if (!found)
            M[k++] = arr1[i];
    }

    for (int j = 0; j < n2; j++) {
        if (!used[j])
            M[k++] = arr2[j];
    }

    printf("Merged Array:\n");
    for (int i = 0; i < k; i++)
        printf("%d ", M[i]);

    return 0;
}

