#include <stdio.h>

int main() {
    char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char digit[] = "0123456789";

    int n;
    printf("Enter the length of the password: ");
    scanf("%d", &n);

    if (n < 3) {
        printf("Password length must be at least 3.\n");
        return 1;
    }

    printf("Generated Password: ");
    
    for (int i = 0; i < n; i++) {
        if (i % 3 == 0)
            printf("%c", uppercase[i % 26]);  // Picks letters in order
        else if (i % 3 == 1)
            printf("%c", lowercase[i % 26]);
        else
            printf("%c", digit[i % 10]);  // Picks digits in order
    }

    printf("\n");
    return 0;
}
