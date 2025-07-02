#include <stdio.h>

int main(void) {
    int n, a[50], i, s, x=0, y=1, t=0, m;
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &s);
    while(!t && s > 0) {
        y = x;
        for(i=x; i<n && i<s+x+1; i++) {
            if(a[i] > a[y]) y = i;
        }
        if(y != x) {
            m = a[y];
            for(i=y; i>x; i--) {
                a[i] = a[i-1];
            }
            a[x] = m;
            s -= y-x;
        }
        t = 1;
        for(i=1; i<n; i++) {
            if(a[i-1] < a[i]) t = 0;
        }
        if(x++ == n) x = 1;
    }
    for(i=0; i<n; i++) printf("%d ", a[i]);
    return 0;
}