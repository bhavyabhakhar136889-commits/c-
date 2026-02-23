#include <stdio.h>
#include <conio.h>

int main() {
    int m, n, p, q;
    int i, j, k;
    int a[10][10], b[10][10], result[10][10];

    clrscr();

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication not possible!\n");
        getch();
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &b[i][j]);

    // Initialize result matrix
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            result[i][j] = 0;

    // Matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
