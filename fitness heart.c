#include <stdio.h>

int main() {
    int N,rate;
    int maxrate = 0, dangercount = 0; 
    scanf("%d",&N);
    for(int i = 0;i<N;i++){
        scanf("%d",&rate);

        if(rate > maxrate) {
            maxrate = rate;
        }if(rate > 140){
            dangercount++;
        }
    }
    printf("max heart rate: %d\n",maxrate);
    printf("danger readings: %d\n",dangercount);
}