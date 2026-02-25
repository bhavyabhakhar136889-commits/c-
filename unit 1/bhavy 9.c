#include <stdio.h>

int main() {
    int a[5], i, sum = 0;
    float avg;           

    for(i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nThe values are:");
    for(i = 0; i < 5; i++) {
        printf("\n%d", a[i]);
        sum = sum + a[i]; 
    }

    avg = sum / 5.0; 

    printf("\n\nTotal Sum = %d", sum);
    printf("\nAverage = %.2f\n", avg);

    return 0;
}s