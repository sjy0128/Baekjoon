#include <stdio.h>

int main(void) {
    int n, m, i;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &m);
        if(m == 300) printf("1 ");
        else if(m >= 275) printf("2 ");
        else if(m >= 250) printf("3 ");
        else printf("4 ");
    }
    return 0;
}