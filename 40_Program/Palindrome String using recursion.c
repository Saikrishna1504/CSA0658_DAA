#include <stdio.h>
#include <string.h>
int isPalindrome(char str[]) {
    char reversedStr[100];
    strcpy(reversedStr, str);
    strrev(reversedStr)
    if (strcmp(str, reversedStr) == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}

