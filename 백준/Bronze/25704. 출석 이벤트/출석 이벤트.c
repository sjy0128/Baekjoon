#include <stdio.h>

int main(void) {
    int n, p, s=0;
    scanf("%d\n%d", &n, &p);
    if(n >= 5) {
        if(n >= 5) s = 500;
        if(n >= 10) s = s > p/10 ? s : p/10;
        if(n >= 15) s = s > 2000 ? s : 2000;
        if(n >= 20) s = s > p/4 ? s : p/4;
    }
    printf("%d", s >= p ? 0 : p-s);
    return 0;
}