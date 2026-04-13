#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int **a, **b;

    a = (int**)malloc(r * sizeof(int*));
    b = (int**)malloc(r * sizeof(int*));

    for(int i = 0; i < r; i++)
    {
        a[i] = (int*)malloc(c * sizeof(int));
        b[i] = (int*)malloc(c * sizeof(int));
    }

    printf("Enter first matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    printf("Subtraction of matrices:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            printf("%d ", a[i][j] - b[i][j]);
        printf("\n");
    }

    return 0;
}
