#include <stdio.h>

int main() {
    int n,hours;
    int totalhours = 0;
    int heavydays = 0;
    int cost;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&hours);
        totalhours += hours;

        if(hours > 4){
           heavydays++;
        }
    }
    cost = totalhours * 200;

    printf("total overtime hours: %d\n",totalhours);
    printf("overtime cost: %d\n",cost);
    printf("heavy overtime days: %d",heavydays);
    return 0;
}