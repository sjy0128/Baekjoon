#include <stdio.h>
#define MAX 100

int main(void) {
    int n, m, pn, p[MAX] = {0,}, s1 = 0, s2 = 0, ink = 0;
    scanf("%d %d", &n, &m);
    while(m--) {
        scanf("%d", &pn);
        p[pn - 1] = 1;
    }
    pn = 0;
    while(p[pn]) pn++;
    for(; pn < n; pn++) {
        if(p[pn]) s2++;
        else {
            if(s2 >= 3) {
                ink += 5 + s1 * 2;
                s1 = s2 = 0;
            }
            s1 += s2 + 1;
            s2 = 0;
        }
    }
    if(s1) ink += 5 + s1 * 2;
    printf("%d", ink);
    return 0;
}