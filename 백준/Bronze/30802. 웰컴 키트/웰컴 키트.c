#include <stdio.h>

int main(void) {
    int n, size[6], t, p, i, count=0;
    scanf("%d", &n);
    for(i=0; i<6; i++) {
        scanf("%d", &size[i]);
    }
    scanf("%d %d", &t, &p);
    for(i=0; i<6; i++) {
        count += size[i] % t == 0 ? size[i] / t : size[i] / t + 1;
    }
    printf("%d\n%d %d", count, n / p, n % p);
    return 0;
}