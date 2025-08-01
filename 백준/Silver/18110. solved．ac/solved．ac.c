#include <stdio.h>

int main(void) {
    int n, i, j, k, t, o[30]={0,}, s=0;
    scanf("%d", &n);
    if(n == 0) {
        printf("0");
        return 0;
    }
    for(i=0; i<n; i++) {
        scanf("%d", &t);
        o[t-1]++;
        s += t;
    }
    t = (int)((float)n*0.15+0.5);
    for(i=0, j=0, k=29; i<t; i++) {
        while(o[j] == 0) j++;
        while(o[k] == 0) k--;
        s -= j+1;
        o[j]--;
        s -= k+1;
        o[k]--;
    }
    printf("%d", (int)((float)s/(n-t*2)+0.5));
    return 0;
}