#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // Writing into file
    fp = fopen("data.txt", "w");   // open file in write mode

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    printf("Enter text to write in file: ");
    gets(text);   // take input from user

    fputs(text, fp);  // write text to file
    fclose(fp);       // close file

    // Reading from file
    fp = fopen("data.txt", "r");   // open file in read mode

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    printf("\nContent of file:\n");

    while (fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text);   // print content
    }

    fclose(fp);   // close file

    return 0;
}
