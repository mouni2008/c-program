#include <stdio.h>

int main() {
    int totaldata,N;
    int usage;
    int remainingdata;
    int successfuldays;

    scanf("%d",&totaldata);
    scanf("%d",&N);
    remainingdata = totaldata;
    for(int i = 0;i<N;i++){
        scanf("%d",&usage);
        if(usage <= remainingdata){
            remainingdata -= usage;
            successfuldays++;
        }else{
            break;
        }
    }
    printf("remaining data: %d\n",remainingdata);
    printf("successful days: %d\n",successfuldays);
    return 0;
}