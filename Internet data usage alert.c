#include <stdio.h>
#include <math.h>

int main() {
    int n,i;
    int usage;
    int totaldata = 0;
    int highusagedays = 0;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&usage);
        totaldata += usage;

        if(usage > 2)
        {
            highusagedays++;
        }
    }

    printf("total data: %d\n",totaldata);
    printf("high usage days: %d\n",highusagedays);

    
    return 0;
}
