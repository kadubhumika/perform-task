#include <stdio.h>

void calendar();

int main() {
    calendar();
    return 0;
}

void calendar() {
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    for (int i = 0; i < 12; i++) {
        printf("%s:\n", months[i]);
        for (int j = 1; j <= daysInMonth[i]; j++) {
            printf("%d ", j);
        }
        printf("\n\n");
    }
}
