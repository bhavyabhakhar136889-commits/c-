#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp1, *fp2;
    char ch;

    if (argc != 3) {
        printf("Usage: source destination");
        return 1;
    }

    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("File error!");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully!");
    return 0;
}
