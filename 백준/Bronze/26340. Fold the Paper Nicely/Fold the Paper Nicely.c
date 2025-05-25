#include <stdio.h>

int main(void) {
    int n, a, b, a2, b2, x, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d %d", &a, &b, &x);
        a2 = a;
        b2 = b;
        for(j=0; j<x; j++) {
            if(a2 > b2) a2 /= 2;
            else b2 /= 2;
        }
        printf("Data set: %d %d %d\n%d %d\n\n", a, b, x, a2 > b2 ? a2 : b2, a2 > b2 ? b2 : a2);
    }
    return 0;
}