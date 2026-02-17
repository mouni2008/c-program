#include <stdio.h>
#include <math.h>

int main() {
    int n,expense;
    int total = 0;
    int overspenddays = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&expense);
        total += expense;

        if(expense > 1000){
            overspenddays++;
        }
    }
    printf("total expense: %d\n",total);
    printf("overspend days: %d\n",overspenddays);
    return 0;
}
