#include <stdio.h>

int main() {
    int l, n, i, j;
    char x;
    scanf("%d", &l);
    for(i=0; i<l; i++) {
        scanf("%d %c", &n, &x);
        for(j=0; j<n; j++) printf("%c", x);
        printf("\n");
    }
    return 0;
}