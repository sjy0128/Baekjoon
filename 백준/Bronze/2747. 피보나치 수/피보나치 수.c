#include <stdio.h>

int main(void) {
    int n, a=0, b=1, i;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        if(a > b) b += a;
        else a += b;
    }
    printf("%d", a < b ? a : b);
    return 0;
}