#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    printf((long long)n * n <= 100000000 ? "Accepted" : "Time limit exceeded");
    return 0;
}