#include <stdio.h>

int main() {
    FILE *fp, *fodd, *feven;
    int num, i;

    // Step 1: Create and write numbers 1 to 10 in DATA.txt
    fp = fopen("DATA.txt", "w");

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    for (i = 1; i <= 10; i++) {
        fprintf(fp, "%d ", i);   // write numbers
    }

    fclose(fp);

    // Step 2: Read from DATA.txt
    fp = fopen("DATA.txt", "r");
    fodd = fopen("ODD.txt", "w");
    feven = fopen("EVEN.txt", "w");

    if (fp == NULL || fodd == NULL || feven == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    // Step 3: Separate odd and even
    while (fscanf(fp, "%d", &num) != EOF) {
        if (num % 2 == 0)
            fprintf(feven, "%d ", num);
        else
            fprintf(fodd, "%d ", num);
    }

    printf("Numbers separated into ODD.txt and EVEN.txt");

    // Close files
    fclose(fp);
    fclose(fodd);
    fclose(feven);

    return 0;
}
