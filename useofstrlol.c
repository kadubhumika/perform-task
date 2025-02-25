#include<stdio.h>
#include<stdlib.h>  

int main() {
    char string[40] = "1234abc"; 
    long integer;                 
    char *ptr;                    
    integer = strtol(string, &ptr, 10);
printf("Integer part is %ld\n", integer); 
    printf("Remaining string part is %s\n", ptr);

    return 0;
}
