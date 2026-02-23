#include <stdio.h>

int main() {
    char name[100];  // Buffer to hold the name (up to 99 chars + null terminator)

    printf("Enter your name: ");
    scanf("%s", name);  // Read name from user (no spaces; use fgets for spaces)

    printf("Your name vertically:\n");
    for (int i = 0; name[i] != '\0'; i++) {
        printf("%c\n", name[i]);
    }

    return 0;
}