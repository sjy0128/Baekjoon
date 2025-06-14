#include <stdio.h>

int fact(int a);

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", fact(n)/(fact(n-k)*fact(k)));
    return 0;
}

int fact(int a) {
    if(a <= 1) return 1;
    return a * fact(a-1);
}