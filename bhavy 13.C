#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);  // Reads until space (no spaces allowed)
    int len = strlen(str);
    printf("Length using strlen: %d\n", len);
    return 0;
}