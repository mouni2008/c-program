#include <stdio.h>
#include <math.h>

int main() {
    int n,i;
    int loss;
    int totalloss = 0;
    int highlossdays = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&loss);
        totalloss += loss;
    }
    if(loss > 100){
        highlossdays++;
    }
    printf("total loss: %d\n",totalloss);
    printf("high loss days: %d\n",highlossdays);
    

    
    
    return 0;
}
