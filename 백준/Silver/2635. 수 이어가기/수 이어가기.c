#include <stdio.h>

int func(int a, int b, int p);

int main(void) {
    int n, len, max = 0, max_i;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        len = func(n, i, 0);
        if(len > max) max = len, max_i = i;
    }
    printf("%d\n", max);
    func(n, max_i, 1);
    return 0;
}

int func(int a, int b, int p) {
    int c, len = 2;
    if(p) printf("%d %d ", a, b);
    while(1) {
        c = a - b;
        if(c < 0) break;
        if(p) printf("%d ", c);
        a = b;
        b = c;
        len++;
    }
    return len;
}