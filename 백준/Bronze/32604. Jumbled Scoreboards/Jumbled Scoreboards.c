#include <stdio.h>

int main(void) {
    int n, pa, pb, a, b, i;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        if(i != 0 && (a < pa || b < pb)) {
            printf("no");
            return 0;
        }
        pa = a;
        pb = b;
    }
    printf("yes");
    return 0;
}