#include <stdio.h>

int main(void) {
    int n, x, i;
    scanf("%d %d", &n, &x);
    while(x--) {
        scanf("%d", &i);
        printf("%d ", i<=(n+1)/2 ? 1 : n);
    }
    return 0;
}