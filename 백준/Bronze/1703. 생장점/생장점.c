#include <stdio.h>

int main(void) {
    int a, sf, p, b;
    while(1) {
        scanf("%d", &a);
        if(!a) break;
        b = 1;
        while(a--) {
            scanf("%d %d", &sf, &p);
            b *= sf;
            b -= p;
        }
        printf("%d\n", b);
    }
    return 0;
}