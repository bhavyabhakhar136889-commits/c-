#include <stdio.h>

int main() {
    int n1, n2, n3, i, j;

    // 1. Input size and elements for First Array
    printf("Enter number of elements in Array 1: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // 2. Input size and elements for Second Array
    printf("Enter number of elements in Array 2: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements: ", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // 3. Define size of the Merged Array
    n3 = n1 + n2;
    int merged[n3];

    // 4. Copy elements of first array into merged array
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // 5. Copy elements of second array into merged array
    // We start from index 'n1' to avoid overwriting the first array
    for (j = 0; j < n2; j++) {
        merged[n1 + j] = arr2[j];
    }

    // 6. Display the result
    printf("\nThe merged array is: ");
    for (i = 0; i < n3; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}