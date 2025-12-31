#include <stdio.h>

int t(int n);
int w(int n);

int main(void) {
    int _t, n;
    scanf("%d", &_t);
    while(_t--) {
        scanf("%d", &n);
        printf("%d\n", w(n));
    }
    return 0;
}

int t(int n) {
    if(!n) return 0;
    return n + t(n - 1);
}

int w(int n) {
    if(!n) return 0;
    return n * t(n + 1) + w(n - 1);
}