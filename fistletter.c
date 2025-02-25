#include <stdio.h>

int main() {
    char sentence[100];
    int i = 0;
 printf("Enter a sentence: ");
    
    while (scanf("%s", sentence) == 1) { 
        printf("%c ", sentence[0]);  
        char ch = getchar();
        if (ch == '\n') {
            break;
        }
    }

    printf("\n");
    return 0;
}
