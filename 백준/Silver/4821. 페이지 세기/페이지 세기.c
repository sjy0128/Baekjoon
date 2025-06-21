#include <stdio.h>

int main() {
    int n, l, h, i, p[1001]={0,}, count;
    char c;
    while(1) {
        scanf("%d", &n);
        if(n == 0) break;
        count = 0;
        while(1) {
            if(scanf("%d-%d", &l, &h) == 1) {
                h = l;
            }
            if(h > n) h = n;
            if(l <= h) {
                p[l-1]++;
                p[h]--;
            }
            scanf("%c", &c);
            if(c == '\n') break;
        }
        for(i=0; i<n; i++) {
            if(i >= 1) p[i] += p[i-1];
            if(p[i] >= 1) count++;
            if(i >= 1) p[i-1] = 0;
        }
        p[n-1] = 0;
        p[n] = 0;
        printf("%d\n", count);
    }
    return 0;
}