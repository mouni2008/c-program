#include<stdio.h>
int main(){
    
    int num;
    scanf("%d",&num);
    
    if(num <= 48 && num <= 57){
        printf("digit");
    }
    
    else{
        printf("invalid");
    }
    return 0;
}