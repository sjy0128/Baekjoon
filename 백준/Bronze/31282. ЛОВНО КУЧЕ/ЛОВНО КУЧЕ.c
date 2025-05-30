#include <stdio.h>

int main() {
    int n, m, k, r, d=0, i=0;
    scanf("%d %d %d", &n, &m, &k);
    r = n;
    while(1) {
        d += k;
        r += m;
        i++;
        if(d >= r) break;
    }
    printf("%d", i);
    return 0;
}