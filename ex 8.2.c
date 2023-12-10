#include <stdio.h>
#include <string.h>

// Function to check whether a string is a palindrome
int isPalindrome(char str[]) {
    int length = strlen(str);

    // Iterate over the string
    for (int i = 0; i < length / 2; i++) {
        // Check if the characters at both ends of the string are equal
        if (str[i] != str[length - i - 1]) {
            return 0; // If the characters are not equal, return 0
        }
    }

    return 1; // If the characters at both ends of the string are equal, return 1
}

int main() {
    char str[] = "malayalam";

    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }
    return 0;
}