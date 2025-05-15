#include <stdio.h>

int main() {
    int n, h, v;
    scanf("%d %d %d", &n, &h, &v);
    printf("%d", (h > n-h ? h : n-h) * (v > n-v ? v : n-v) * 4);
    return 0;
}