#include <stdio.h>

int main() {
    int N,units;
    int totalunits = 0, spikehours = 0; 
    scanf("%d",&N);
    for(int i = 0;i<N;i++){
        scanf("%d",&units);
        totalunits += units;

        if(units > 5){
            spikehours++;
        }
    }
    printf("total units: %d\n",totalunits);
    printf("spike hours: %d\n",spikehours);
}