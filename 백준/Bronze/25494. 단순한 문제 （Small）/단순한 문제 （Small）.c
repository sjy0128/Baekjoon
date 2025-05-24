#include <stdio.h>

int main(void) {
    int t, a, b, c, count, i, j, k, l;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d %d", &a, &b, &c);
        count=0;
        for(j=1; j<=a; j++) {
            for(k=1; k<=b; k++) {
                for(l=1; l<=c; l++) {
                    if(j%k == k%l && k%l == l%j) count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}