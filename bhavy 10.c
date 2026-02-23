#include <stdio.h>
#include <conio.h>

void main() {
    int a[10][10], b[10][10], c[10][10];
    int i, j, m, n;

    clrscr();  // clear screen (Turbo C specific)

    printf("Enter number of rows and columns of the matrices: ");
    scanf("%d %d", &m, &n);

    printf("\nEnter elements of first matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Subtract matrices
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\nResultant Matrix after Subtraction:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    getch();  // wait for key press (Turbo C specific)
}
