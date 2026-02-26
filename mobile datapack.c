#include <stdio.h>

int main() {
    int dataPack, N;
    int usage;
    int i = 0;
    int exhaustedDay = -1;
    int overusedData = 0;

    scanf("%d", &dataPack);
    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &usage);

        dataPack -= usage;

        if (dataPack <= 0) {
            exhaustedDay = i + 1;   // Days start from 1

            if (dataPack < 0) {
                overusedData = -dataPack;  // Extra used
            } else {
                overusedData = 0;          // Exactly zero
            }

            break;  // Stop once exhausted
        }

        i++;
    }

    if (exhaustedDay == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    } else {
        printf("Exhausted Day: %d\n", exhaustedDay);
        printf("Overused Data: %d\n", overusedData);
    }

    return 0;
}