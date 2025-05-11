#include <stdio.h>

int main(void) {
    int n, mid, temp, i=1, j;
    while(1) {
        scanf("%d", &n);
        if(n == 0) break;
        mid = 0;
        for(j=0; j<n; j++) {
            scanf("%d", &temp);
            if(j == n/2) mid += temp;
            else if(n%2 == 0 && j == n/2-1) mid += temp;
        }
        printf("Case %d: %.1f\n", i++, (float)mid/(n % 2 == 0 ? 2 : 1));
    }
    return 0;
}