#include<stdio.h>
int main(){
    int num;
    printf("enter the num:\n");
    scanf("%d",&num);
    
    if(num % 2== 0){
        printf("even number");
    }
    else{
        printf("odd number");
    }
    return 0;
}