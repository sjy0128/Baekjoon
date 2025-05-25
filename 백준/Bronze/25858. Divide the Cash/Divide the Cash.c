#include <stdio.h>

int main(void) {
    int n, d, sum=0, p[30], i;
    scanf("%d %d", &n, &d);
    for(i=0; i<n; i++) {
        scanf("%d", &p[i]);
        sum += p[i];
    }
    for(i=0; i<n; i++) {
        printf("%d\n", d/sum*p[i]);
    }
    return 0;
}