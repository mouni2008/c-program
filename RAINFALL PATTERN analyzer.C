#include <stdio.h>
#include <math.h>

int main() {
    int n,i;
    int rainfall;
    int total = 0;
    int heavydays = 0;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&rainfall);
        total += rainfall;

        if(rainfall > 50){
            heavydays++;
        }
    }


    printf("total rainfall: %d\n",total);
    printf("heavy rain days: %d\n",heavydays);

    

    
    
    return 0;
}
