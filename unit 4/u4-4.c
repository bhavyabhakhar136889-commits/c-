#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // Open file in append mode
    fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Write (append) into file
    fputs(text, fp);

    printf("Content appended successfully!");

    fclose(fp);   // close file

    return 0;
}
