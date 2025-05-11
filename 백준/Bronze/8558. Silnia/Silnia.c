#include <stdio.h>

int main(void) {
    int n, fact=1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        fact *= i;
        if(fact >= 10) fact %= 10;
    }
    printf("%d", fact%10);
    return 0;
}