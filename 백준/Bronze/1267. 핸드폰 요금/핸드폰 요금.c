#include <stdio.h>

int main(void) {
    int n, i, t, y=0, m=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &t);
        y += (t/30+1) * 10;
        m += (t/60+1) * 15;
    }
    if(y <= m) printf("Y ");
    if(m <= y) printf("M ");
    printf("%d", y < m ? y : m);
    return 0;
}