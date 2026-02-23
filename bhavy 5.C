#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int original[n], copy[n];
    
    // Input elements into original array
    printf("Enter %d elements for original array: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &original[i]);
    }
    
    // Copy elements from original to copy array
    for(i = 0; i < n; i++) {
        copy[i] = original[i];
    }
    
    // Display both arrays
    printf("\nOriginal array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", original[i]);
    }
    
    printf("\nCopied array:   ");
    for(i = 0; i < n; i++) {
        printf("%d ", copy[i]);
    }
    
    printf("\n");
    return 0;
}
