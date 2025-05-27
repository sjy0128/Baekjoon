#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%c%d", (n-1)%8+'a', (n-1)/8+1);
    return 0;
}