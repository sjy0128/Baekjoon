#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, *a, *b, l=0, s=0, e=-1, c=0, r=0;
    scanf("%d", &n);
    a = (int *)calloc(n, sizeof(int));
    b = (int *)malloc(sizeof(int) * n/2);
    a[0] = 1;
    for(int i=2; i<=(n/2<2000?n/2:2000); i++) {
        if(a[i-1]) continue;
        for(int j=i*2; j<=n; j+=i) a[j-1] = 1;
    }
    for(int i=0; i<n; i++) {
        if(!a[i]) b[l++] = i+1;
    }
    free(a);
    do {
        if(c == n) r++;
        if(c <= n) c += b[++e];
        else c -= b[s++];
    } while(s <= e && e < l);
    free(b);
    printf("%d", r);
    return 0;
}