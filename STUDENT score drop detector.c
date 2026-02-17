#include <stdio.h>
#include <math.h>

int main() {
    int n,i;
    int mark;
    int total = 0;
    int average;
    int failedsubjects=0;

    scanf("%d",&n);
    for(int i=0;i<n;i++){

        scanf("%d",&mark);
        total += mark;

    
    if(mark<40){
        failedsubjects++;
    }
    }
    average = total / n;

    printf("averagescore:  %d \n",average);
    printf("failed subjects:%d \n",failedsubjects);
    
    
    return 0;
}