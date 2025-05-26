#include <stdio.h>

int main() {
    int n, p, t, i;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &p, &t);
        printf("%d\n", p + t/4 - t/7);
    }
    return 0;
}