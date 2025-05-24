#include <stdio.h>

int main(void) {
    int n, a, b, i, min=1001;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        if(a <= b && b < min) min = b;
    }
    printf("%d", min == 1001 ? -1 : min);
    return 0;
}