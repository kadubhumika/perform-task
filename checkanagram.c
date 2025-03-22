#include <stdio.h>
#include <string.h>

// Function to sort a string
void sortString(char str[]) {
    int n = strlen(str);
    char temp;

    // Simple Bubble Sort for characters
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                // Swap characters if they are not in order
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

// Function to check if two strings are anagrams
int checkAnagram(char str1[], char str2[]) {
    int n = strlen(str1);
    int m = strlen(str2);

    // If lengths are different, they cannot be anagrams
    if (n != m) {
        return 0;
    }

    // Sort both strings
    sortString(str1);
    sortString(str2);

    // Compare both sorted strings
    if (strcmp(str1, str2) == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char str1[100], str2[100];

    // Take input for the first string
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Take input for the second string
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Check if strings are anagrams
    if (checkAnagram(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
