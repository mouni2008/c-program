#include <stdio.h>
#include <math.h>

int main() {
    int n,i;
    int patients;
    int totalpatients = 0;
    int overcrowdeddays = 0;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&patients);
       totalpatients += patients;

        if(patients > 100)
        {
            overcrowdeddays++;
        }
    }

    printf("total patients: %d\n",totalpatients);
    printf("overcrowded days: %d\n",overcrowdeddays);

    
    return 0;
}
