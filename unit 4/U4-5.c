#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp1, *fp2;
    char str[100], ch;
    int i, len;

    // Step 1: Write into greencity.txt
    fp1 = fopen("greencity.txt", "w");

    if (fp1 == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    fputs(str, fp1);
    fclose(fp1);

    // Step 2: Read from greencity.txt
    fp1 = fopen("greencity.txt", "r");
    fp2 = fopen("cleancity.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    fgets(str, sizeof(str), fp1);  // read string
    len = strlen(str);

    // Step 3: Write reverse into cleancity.txt
    for (i = len - 1; i >= 0; i--) {
        fputc(str[i], fp2);
    }

    printf("Reversed content written to cleancity.txt");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
