#include <stdio.h>

int main() {
    int n, i, num;
    int positive = 0, negative = 0, even = 0, odd = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        
        // Check positive/negative (0 is neither)
        if(num > 0) {
            positive++;
        } else if(num < 0) {
            negative++;
        }
        
        // Check even/odd (0 is even)
        if(num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
    printf("\nResults:\n");
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    
    return 0;
}
