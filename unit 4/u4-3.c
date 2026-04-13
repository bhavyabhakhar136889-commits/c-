#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    // Open source file in read mode
    fp1 = fopen("source.txt", "r");

    if (fp1 == NULL) {
        printf("Source file cannot be opened!");
        return 1;
    }

    // Open destination file in write mode
    fp2 = fopen("destination.txt", "w");

    if (fp2 == NULL) {
        printf("Destination file cannot be opened!");
        return 1;
    }

    // Copy content
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    printf("File copied successfully!");

    // Close files
    fclose(fp1);
    fclose(fp2);

    return 0;
}
