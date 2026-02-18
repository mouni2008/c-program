#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    int max,noisycount = 0;
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]>70){
            noisycount++;
        }
    }
    printf("maximum noise: %d\n",max);
    printf("noisy periods: %d\n",noisycount);
    return 0;
}