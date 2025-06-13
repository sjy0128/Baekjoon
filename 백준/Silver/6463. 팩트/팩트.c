#include <stdio.h>

int f1(int a), f2(int a);

int main() {
    int n, i;
    while(scanf("%d", &n) != EOF) {
        printf("%5d -> %d\n", n, f2(f1(n))%10);
    }
    return 0;
}

int f1(int a) {
    if(a <= 1) return 1;
    int b = f1(a - 1);
    return f2(a) * (f2(b) % 100000);
}

int f2(int a) {
    if(a % 10 != 0) return a;
    return f2(a / 10);
}
