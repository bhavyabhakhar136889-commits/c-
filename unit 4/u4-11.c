#include <stdio.h>

int main() {
    FILE *fp;
    int size;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    // Move pointer to end of file
    fseek(fp, 0, SEEK_END);

    // Get current position (file size)
    size = ftell(fp);

    printf("Size of file = %d bytes", size);

    fclose(fp);

    return 0;
}
