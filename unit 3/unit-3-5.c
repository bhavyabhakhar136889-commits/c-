#include<stdio.h>
#include<stdlib.h>

int isPrime(int num)
{
    if(num < 2) return 0;

    for(int i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(isPrime(arr[i]))
            sum += arr[i];
    }

    printf("Sum of prime numbers = %d", sum);

    free(arr);

    return 0;
}
