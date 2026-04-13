#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    // Read first character
    ch = fgetc(fp);
    printf("First character: %c\n", ch);

    // Current position
    printf("Position = %ld\n", ftell(fp));

    // Move pointer 5 bytes ahead
    fseek(fp, 5, SEEK_SET);
    printf("After fseek, Position = %ld\n", ftell(fp));

    // Go back to beginning
    rewind(fp);
    printf("After rewind, Position = %ld\n", ftell(fp));

    fclose(fp);
    return 0;
}
