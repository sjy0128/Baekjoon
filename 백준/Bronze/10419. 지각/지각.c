#include <stdio.h>

int main(void) {
    int t, d, i, j;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &d);
        for(j=1; j+j*j<=d; j++);
        printf("%d\n", j-1);
    }
    return 0;
}