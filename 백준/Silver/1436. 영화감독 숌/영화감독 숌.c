#include <stdio.h>

int main(void) {
    int n, i, a=0, b=-1, c=1;
    scanf("%d", &n);
    for(i=1; i<n; i++) {
        if(a % 10 != 5) a++;
        else {
            for(c=10; (a % (c*10))/c == 6; c*=10);
            b++;
            if(b == c) {
                a += 2;
                b = -1;
            }
        }
    }
    if(b != -1) {
        a /= c;
        printf("%d", (a*1000 + 666) * c + b);
    } else printf("%d", a*1000 + 666);
    return 0;
}