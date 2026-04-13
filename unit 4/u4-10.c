#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    // Open original file
    fp1 = fopen("data.txt", "r");

    if (fp1 == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    // Open new file to store result
    fp2 = fopen("new.txt", "w");

    if (fp2 == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    // Read and replace
    while ((ch = fgetc(fp1)) != EOF) {
        if (ch == 'a')
            ch = 'x';

        fputc(ch, fp2);
    }

    printf("Replacement done successfully!");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
