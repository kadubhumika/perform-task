#include <stdio.h>

int bankbalance(int withdrawamount, int totalamount);

int main() {
    char name[] = "Bhumika Kadu";
    int age = 19;
    int totalamount = 20000;
    int withdrawamount;
    
    printf("Enter amount to be withdrawn from your account: ");
    scanf("%d", &withdrawamount);
    
    if (withdrawamount > totalamount) {
        printf("Insufficient balance!\n");
    } else {
        int result = bankbalance(withdrawamount, totalamount);
        printf("%s withdrew an amount of %d. Now, the current bank balance is %d.\n", name, withdrawamount, result);
    }

    return 0;
}

int bankbalance(int withdrawamount, int totalamount) {
    return totalamount - withdrawamount;
}
