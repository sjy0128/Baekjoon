#include <stdio.h>

int main(void) {
    int n, t, l, i, min=200;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &t, &l);
        if(t + l < min) min = t + l;
    }
    printf("%d", min);
    return 0;
}