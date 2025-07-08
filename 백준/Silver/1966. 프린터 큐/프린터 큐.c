#include <stdio.h>

int main(void) {
    int t, n, m, i, j, q[5050], s=0, e, f, g;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d", &n, &m);
        s = 0;
        e = n;
        f = 0;
        for(j=0; j<n; j++) scanf("%d", &q[j]);
        do {
            g = s;
            for(j=s; j<e; j++) {
                if(q[j] > q[g]) g = j;
            }
            if(g != s) {
                if(s == m) m = e;
                q[e++] = q[s];
            } else f++;
        } while(m != s++);
        printf("%d\n", f);
    }
    return 0;
}