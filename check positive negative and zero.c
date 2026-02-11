#include<stdio.h>
int main(){
    int num;
    printf("enter the num:\n");
    scanf("%d",&num);
    
    if(num>0){
        printf("positive number");
    }
    else if(num<0){
        printf("negative number");
    }
    else{
        printf("zero");
    }
    return 0;
}