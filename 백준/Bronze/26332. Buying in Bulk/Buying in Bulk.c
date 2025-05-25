#include <stdio.h>

int main(void) {
    int n, c, p, i;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &c, &p);
        printf("%d %d\n%d\n", c, p, c*p-((c-1)*2));
    }
    return 0;
}