#include <stdio.h>

int main(void) {
    int t, n, i, j, a, b, c;
    char o;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d\n", &n);
        b = 0;
        c = 0;
        for(j=0; j<n*2+1; j++) {
            if(j % 2 == 0) {
                scanf("%d", &a);
                if(c && a != 0) b = 2;
            } else {
                scanf("%c", &o);
                if(b == 1) {
                    if(!c) c = 1;
                }
                if(o == '-' && b == 0) {
                    b = 1;
                }
            }
        }
        printf(b != 2 ? "YES\n" : "NO\n");
    }
    return 0;
}