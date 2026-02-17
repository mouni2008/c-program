#include <stdio.h>
#include <math.h>

int main() {
    int batterypercent,n;
    int drain,totaldrain = 0;
    scanf("%d",&batterypercent);
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&drain);
        totaldrain += drain;
    }
    batterypercent -= totaldrain;
    if(batterypercent < 0)
        batterypercent = 0;

    

    printf("remaining battery : %d %%",batterypercent); 
    
    return 0;
}
