#include <stdio.h>

int main() {

    int n,i;
    int revenue;
    int total = 0;
    int targetdays = 0;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&revenue);
        total += revenue;

        if(revenue > 50000){
            targetdays++;
        }

    }

    printf("total revenue: %d\n",total);
    printf("total days: %d\n",targetdays);
    
    return 0;
}