#include <stdio.h>

int main(void) {
    int n, m, h_max=0, a_max=0, i, temp;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++) {
        scanf("%d", &temp);
        if(temp > h_max) h_max = temp;
    }
    for(i=0; i<m; i++) {
        scanf("%d", &temp);
        if(temp > a_max) a_max = temp;
    }
    printf("%d", h_max + a_max);
    return 0;
}