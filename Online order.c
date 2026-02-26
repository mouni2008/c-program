#include <stdio.h>

int main() {
    int N, status;
    int i = 0;
    int successful = 0, cancelled = 0;

    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &status);

        if (status == 1)
            successful++;
        else
            cancelled++;

        i++;
    }

    printf("Successful: %d\n", successful);
    printf("Cancelled: %d\n", cancelled);

    if (cancelled > successful)
        printf("Status: Risk\n");
    else
        printf("Status: Safe\n");

    return 0;
}