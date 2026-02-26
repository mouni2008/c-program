#include <stdio.h>

int main() {
    int N;
    int status;
    int i = 0;
    int currentStreak = 0;
    int maxStreak = 0;

    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &status);

        if (status == 0) {              // EMI missed
            currentStreak++;

            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {                        // EMI paid
            currentStreak = 0;          // Reset streak
        }

        i++;
    }

    printf("Longest Default Streak: %d\n", maxStreak);

    return 0;
}