#include <stdio.h>

int main() {
    int n, c=1, i;
    scanf("%d", &n);
    for(i=1; i<=5; i++) {
        c *= n--;
        c /= i;
    }
    printf("%d", c);
    return 0;
}