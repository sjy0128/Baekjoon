#include <stdio.h>

int main(void) {
    int t, s, n, p, q;
    scanf("%d", &t);
    while(t--) {
        scanf("%d\n%d", &s, &n);
        while(n--) {
            scanf("%d %d", &p, &q);
            s += p * q;
        }
        printf("%d\n", s);
    }
    return 0;
}