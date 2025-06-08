#include <stdio.h>
int main(void) {
    int i, n, az[10]={0,}, max=0;
    scanf("%d", &n);
    for(i=n; i>0; i/=10) {
        if(i%10==6) {
            if(az[6]>az[9]) az[9]++;
            else az[6]++;
        } else if(i%10==9) {
            if(az[9]>az[6]) az[6]++;
            else az[9]++;
        } else az[i%10]++;
        if(az[i%10] > max) max = az[i%10];
    }
    printf("%d", max);
    return 0;
}