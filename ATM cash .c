#include <stdio.h>

int main() {

    int initalcash, n;
    int withdrawal;
    int riskcount = 0;

    scanf("%d",&initalcash);
    scanf("%d",&n);
    int balance = initalcash;
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&withdrawal);
        balance -= withdrawal;

        if(balance < 5000)
        {
            riskcount++;
        }
    }

    printf("remaining cash: %d\n",balance);
    printf("risk count: %d\n",riskcount);
    
    return 0;
}