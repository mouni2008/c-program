#include <stdio.h>

int main() {
    int capacity,N;
    int items,overrflowdays = 0;

    scanf("%d",&capacity);
    scanf("%d",&N);
    
    for(int i = 0;i<N;i++){
        scanf("%d",&items);
        capacity -= items;

        if(capacity < 0 && capacity + items >= 0){
            overrflowdays++;
        }
    }
    printf("remaining capacity: %d\n",capacity);
    printf("overflow days: %d\n",overrflowdays);
    return 0;
}