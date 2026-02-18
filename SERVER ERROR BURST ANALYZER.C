#include <stdio.h>

int main() {

    int n,i;
    int errors[100];
    int total = 0;
    int critical = 0;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&errors[i]);
        total += errors[i];

        if(errors[i]>50){
            critical++;
        }

    }

    printf("total errors: %d\n",total);
    printf("critical hours: %d\n",critical);
    
    return 0;
}