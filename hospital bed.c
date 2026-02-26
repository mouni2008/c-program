#include <stdio.h>

int main() {
    int capacity, N;
    int change;
    int i = 0;
    int occupied = 0;
    int criticalCount = 0;

    scanf("%d", &capacity);
    scanf("%d", &N);

    // 90% threshold calculation
    int threshold = (capacity * 90) / 100;

    while (i < N) {
        scanf("%d", &change);

        occupied += change;

        if (occupied > threshold) {
            criticalCount++;
        }

        i++;
    }

    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", criticalCount);

    return 0;
}