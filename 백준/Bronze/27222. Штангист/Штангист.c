#include <stdio.h>

int main() {
    int n, hun[1000], x, y, i, sum=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &hun[i]);
    for(i=0; i<n; i++) {
        scanf("%d %d", &x, &y);
        if(hun[i] == 1 && y > x) sum += y - x;
    }
    printf("%d", sum);
    return 0;
}