#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);
    
    if (strcmp(str1, str2) == 0) {
        printf("Strings are SAME\n");
    } else {
        printf("Strings are DIFFERENT\n");
    }
    
    return 0;
}

