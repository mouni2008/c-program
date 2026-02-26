#include <stdio.h>

int main() {
    int ATMcash, N;
    int withdrawal;
    int successfulWithdrawals = 0;
    int i = 0;

    // Input
    scanf("%d", &ATMcash);
    scanf("%d", &N);

    // While loop to process withdrawals
    while (i < N) {
        scanf("%d", &withdrawal);

        if (withdrawal <= ATMcash) {
            ATMcash -= withdrawal;
            successfulWithdrawals++;
        } else {
            break;  // Stop if cash is insufficient
        }

        i++;
    }

    // Output
    printf("Successful Withdrawals: %d\n", successfulWithdrawals);
    printf("Remaining Cash: %d\n", ATMcash);

    return 0;
}