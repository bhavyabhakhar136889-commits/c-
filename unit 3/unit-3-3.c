#include<stdio.h>

void maxmin(int arr[], int n, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > *max)
            *max = arr[i];

        if(arr[i] < *min)
            *min = arr[i];
    }
}

int main()
{
    int n, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    maxmin(arr, n, &max, &min);

    printf("Maximum = %d\nMinimum = %d", max, min);

    return 0;
}
