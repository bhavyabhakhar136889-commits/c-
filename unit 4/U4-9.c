#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int upper = 0, lower = 0, digits = 0, vowels = 0, special = 0;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {

        // Uppercase letters
        if (ch >= 'A' && ch <= 'Z') {
            upper++;
            if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                vowels++;
        }

        // Lowercase letters
        else if (ch >= 'a' && ch <= 'z') {
            lower++;
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
        }

        // Digits
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }

        // Special symbols (excluding space, tab, newline)
        else if (ch != ' ' && ch != '\n' && ch != '\t') {
            special++;
        }
    }

    fclose(fp);

    printf("Uppercase letters = %d\n", upper);
    printf("Lowercase letters = %d\n", lower);
    printf("Digits = %d\n", digits);
    printf("Vowels = %d\n", vowels);
    printf("Special symbols = %d\n", special);

    return 0;
}
