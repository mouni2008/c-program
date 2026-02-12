#include<stdio.h>
int main(){
    
    char ch;
    scanf("%C",&ch);
    
    if(ch >= 65 && ch<=90){
        printf("UPPERCASE LETTER");
    }
    
    else{
        printf("lowercase letter");
    }
    return 0;
}