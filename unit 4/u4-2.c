#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, spaces = 0, tabs = 0, lines = 0;

    fp = fopen("data.txt", "r");   // open file in read mode

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == ' ')
            spaces++;
        else if (ch == '\t')
            tabs++;
        else if (ch == '\n')
            lines++;
    }

    fclose(fp);

    printf("Characters = %d\n", characters);
    printf("Blank spaces = %d\n", spaces);
    printf("Tabs = %d\n", tabs);
    printf("Lines = %d\n", lines);

    return 0;
}
