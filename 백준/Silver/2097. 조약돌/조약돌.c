#include <stdio.h>

int max(int a, int b) { return a > b ? a : b; }

int main(void) {
    int n, i;
    scanf("%d", &n);
    for(i = 1; i * i < n; i++);
    i--;
    printf("%d", max(4, i * 4 - (n <= (i * (i + 1)) ? 2 : 0)));
    return 0;
}