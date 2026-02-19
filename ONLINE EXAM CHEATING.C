#include <stdio.h>

int main() {
    int N,risk;
    int totalrisk = 0, highrisk = 0; 
    scanf("%d",&N);
    for(int i = 0;i<N;i++){
        scanf("%d",&risk);
        totalrisk += risk;

        if(risk > 50){
            highrisk++;
        }
    }
    printf("total risk: %d\n",totalrisk);
    printf("high risk sessions: %d\n",highrisk);
}