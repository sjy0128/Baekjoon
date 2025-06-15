#include <stdio.h>

int main() {
    int t, n, i, j, a[6], b[6], d, sum;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        for(j=0, sum=0; j<6; b[j]=0, scanf("%d", &a[j]), sum+=a[j++]);
        if(sum > n) {
            printf("1\n");
            continue;
        }
        d = 1;
        while(sum <= n) {
            sum *= 4;
            d++;
        }
        printf("%d\n", d);
    }
    return 0;
}