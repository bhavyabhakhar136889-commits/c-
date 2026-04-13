#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    int num, rev = 0, rem;

    // Write number into file
    fp1 = fopen("num.txt", "w");
    printf("Enter a number: ");
    scanf("%d", &num);
    fprintf(fp1, "%d", num);
    fclose(fp1);

    // Read number
    fp1 = fopen("num.txt", "r");
    fscanf(fp1, "%d", &num);
    fclose(fp1);

    // Reverse number
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    // Write reverse into another file
    fp2 = fopen("rev.txt", "w");
    fprintf(fp2, "%d", rev);
    fclose(fp2);

    printf("Reverse stored in rev.txt");
    return 0;
}
