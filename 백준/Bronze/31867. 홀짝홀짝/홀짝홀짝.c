#include <stdio.h>

int main(void) {
    int n, i, o=0, e=0;
    char k;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf(" %c", &k);
        if((k-'0')%2 == 0) e++;
        else o++;
    }
    printf("%d", o == e ? -1 : (o > e ? 1 : 0));
    return 0;
}