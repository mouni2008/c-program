#include <stdio.h>

int main() {
    int n,delay;
    int totaldelay = 0;
    int delayedcount = 0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&delay);
        totaldelay += delay;

        if(delay > 30){
            delayedcount++;
        }
    }
    printf("total delay: %d\n",totaldelay);
    printf("delayed deleveries: %d",delayedcount);
    return 0;
}