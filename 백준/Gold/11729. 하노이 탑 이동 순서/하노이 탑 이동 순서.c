#include <stdio.h>

void hanoi(int n, int f, int t, int a);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", (1 << n) - 1);
    hanoi(n, 1, 3, 2);
    return 0;
}

void hanoi(int n, int f, int t, int a) {
    if(n <= 1) {
        printf("%d %d\n", f, t);
        return;
    }
    hanoi(n-1, f, a, t);
    printf("%d %d\n", f, t);
    hanoi(n-1, a, t, f);
}