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

        if (status == 0) {          // Machine failed
            currentStreak++;
            
            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {                    // Machine working
            currentStreak = 0;      // Reset streak
        }

        i++;
    }

    printf("Longest Failure Streak: %d\n", maxStreak);

    return 0;
}