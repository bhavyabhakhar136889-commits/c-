#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;

    printf("Number of arguments = %d\n", argc);

    printf("List of arguments:\n");
    for (i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}
