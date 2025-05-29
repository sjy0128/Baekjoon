#include <stdio.h>
int main(void) {
    int n, h, a, i, count=0;
    scanf("%d %d", &n, &h);
    for(i=0; i<n; i++) {
        scanf("%d", &a);
        if(a <= h) count++;
    }
    printf("%d", count);
    return 0;
}