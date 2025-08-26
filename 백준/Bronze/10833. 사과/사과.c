#include <stdio.h>

int main(void) {
    int n, a, b, s=0;
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d", &a, &b);
        s += b % a;
    }
    printf("%d", s);
    return 0;
}