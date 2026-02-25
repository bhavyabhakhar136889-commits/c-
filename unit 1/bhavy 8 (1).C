#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int n1 = 3, n2 = 3;
    
    int merged[6];  // Size = n1 + n2
    int i, j, k = 0;
    
    
    for (i = 0; i < n1; i++) {
        merged[k++] = arr1[i];
    }
    
    
    for (j = 0; j < n2; j++) {
        merged[k++] = arr2[j];
    }
    
   
    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}
