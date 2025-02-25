#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "Hello Bhumika";
    char str1[100];              

    // for better understand strncpy(destination, source, n )
    strncpy(str1, str, 5);
    str1[5] = '\0';
    printf("Final string: %s\n", str1);

    return 0;
}