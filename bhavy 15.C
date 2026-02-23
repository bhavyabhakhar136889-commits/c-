#include <stdio.h>

int main() {
    char str[100];
    int spaces = 0, vowels = 0;
    int i = 0;
    
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);  // Reads string with spaces
    
    // Count spaces and vowels
    while (str[i] != '\0') {
        // Count spaces
        if (str[i] == ' ') {
            spaces++;
        }
        // Count vowels (both lowercase and uppercase)
        else if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                 str[i] == 'o' || str[i] == 'u' ||
                 str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
                 str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
        i++;
    }
    
    printf("Number of spaces: %d\n", spaces);
    printf("Number of vowels: %d\n", vowels);
    
    return 0;
}
