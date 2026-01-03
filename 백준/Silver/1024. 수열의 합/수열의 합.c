#include <stdio.h>

int main(void) {
    int n, l, s = 0, p;
    scanf("%d %d", &n, &l);
    for(int i = 0; i < l - 1; i++) s += i;
    for(; l <= 100; l++) {
        s += l - 1;
        if(!((n - s) % l) && (p = (n - s) / l) >= 0) {
            for(int i = 0; i < l; i++) printf("%d ", p + i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}