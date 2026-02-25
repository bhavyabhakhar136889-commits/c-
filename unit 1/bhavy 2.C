#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        printf("Enter element %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    average = sum / n;

    printf("\nTotal: %.2f\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}

