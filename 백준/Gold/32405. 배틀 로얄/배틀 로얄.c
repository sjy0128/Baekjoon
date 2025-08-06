#include <stdio.h>

int main(void) {
    int q[5000000];
    int n, i, d[200000], h[200000], s, e;
    long long dsum=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &d[i]);
    for(i=0; i<n; i++) scanf("%d", &h[i]);
    for(i=0; i<n; i++) q[i] = i;
    s = 0;
    e = n;
    while(s < e-1) {
        i = q[s++];
        if(h[i]-dsum > 0) {
            dsum += d[i];
            h[i] += d[i];
            q[e++] = i;
        }
    }
    printf("%d", q[s]+1);
    return 0;
}