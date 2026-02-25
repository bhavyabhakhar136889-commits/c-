#include <stdio.h>

int main() {
    char str[100];
    int i, len, flag = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Find length
    for (len = 0; str[len] != '\0'; len++);
    
    // Check palindrome (compare first half with second half)
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }
    
    if (flag == 0) {
        printf("%s is a PALINDROME\n", str);
    } else {
        printf("%s is NOT a palindrome\n", str);
    }
    
    return 0;
}
