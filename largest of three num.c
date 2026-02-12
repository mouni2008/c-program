#include<stdio.h>
int main(){
    
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    if(a<b && b>c){
        printf("%d is largest",b);
    }
    else if(a<c && c>a){
        printf("%d is largest",c);
    }
    else{
        printf("invalid");
    }
    return 0;
}