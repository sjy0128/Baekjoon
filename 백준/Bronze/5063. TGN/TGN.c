#include <stdio.h>

int main(void) {
    int n, i, r, e, c;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d %d", &r, &e, &c);
        if(r == (e-c)) printf("does not matter\n");
        else printf("%sadvertise\n", r > (e-c) ? "do not " : "");
    }
    return 0;
}