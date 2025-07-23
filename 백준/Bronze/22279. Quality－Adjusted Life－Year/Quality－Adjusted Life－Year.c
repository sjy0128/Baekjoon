#include <stdio.h>

int main() {
    int n, i;
    float a, b, s=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%f %f", &a, &b);
        s += a * b;
    }
    printf("%f", s);
    return 0;
}