#include <stdio.h>

int main() {
    int maxWeight, N;
    int weight;
    int i = 0;
    int totalWeight = 0;
    int passengersAllowed = 0;
    int overload = 0;

    scanf("%d", &maxWeight);
    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &weight);

        totalWeight += weight;

        if (totalWeight > maxWeight) {
            overload = 1;
            break;   // Stop when overload happens
        }

        passengersAllowed++;
        i++;
    }

    printf("Passengers Allowed: %d\n", passengersAllowed);

    if (overload)
        printf("Overload: Yes\n");
    else
        printf("Overload: No\n");

    return 0;
}