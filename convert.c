#include <stdio.h>

int main() {
    int n;
    
    // Input number of days
    printf("Enter the number of days: ");
    scanf("%d", &n);

    // Calculate years, months, weeks, and remaining days
    int year = n / 365;
    int remaining_days = n % 365;
    
    int month = remaining_days / 30;
    remaining_days %= 30;

    int week = remaining_days / 7;
    int days = remaining_days % 7;

    // Output the results
    printf("Years: %d\n", year);
    printf("Months: %d\n", month);
    printf("Weeks: %d\n", week);
    printf("Days: %d\n", days);

    return 0;
}
