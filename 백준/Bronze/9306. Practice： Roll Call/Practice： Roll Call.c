#include <stdio.h>

int main(void) {
    int n, x;
    char f[21], l[21];
    scanf("%d", &n);
    for(x=1; x<=n; x++) {
        scanf("%s\n%s", f, l);
        printf("Case %d: %s, %s\n", x, l, f);
    }
    return 0;
}