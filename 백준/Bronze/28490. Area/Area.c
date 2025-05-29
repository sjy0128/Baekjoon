#include <stdio.h>

int main(void) {
    int n, h, w, i, max=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &h, &w);
        if(h * w > max) max = h * w;
    }
    printf("%d", max);
    return 0;
}