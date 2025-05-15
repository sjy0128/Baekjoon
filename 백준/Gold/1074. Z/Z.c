#include <stdio.h>

int main() {
    int n, r, c, i, a=0;
    scanf("%d %d %d", &n, &r, &c);
    for(i=n-1; i>=0; i--) {
        if(r >= 1<<i) {
            a += 1<<(i*2+1);
            r -= 1<<i;
        }
        if(c >= 1<<i) {
            a += 1<<(i*2);
            c -= 1<<i;
        }
    }
    printf("%d", a);
    return 0;
}