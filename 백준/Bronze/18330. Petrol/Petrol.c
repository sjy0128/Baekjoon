#include <stdio.h>

int main() {
    int n, k;
    scanf("%d\n%d", &n, &k);
    printf("%d", (n-k > 60 ? n*2-k-60 : n)*1500);
    return 0;
}