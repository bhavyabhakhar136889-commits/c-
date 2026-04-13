#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\nAverage = %.2f", sum, avg);

    free(arr);

    return 0;
}
