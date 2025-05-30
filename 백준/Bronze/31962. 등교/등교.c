#include <stdio.h>

int main(void) {
    int n, x, i, s, t, max=-1;
    scanf("%d %d", &n, &x);
    for(i=0; i<n; i++) {
        scanf("%d %d", &s, &t);
        if(s + t <= x && s > max) max = s;
    }
    printf("%d", max);
    return 0;
}