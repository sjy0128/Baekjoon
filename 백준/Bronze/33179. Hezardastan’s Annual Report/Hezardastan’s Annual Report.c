#include <stdio.h>
int main(void) {
    int n, i, p, sum=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &p);
        sum += p%2==0 ? p/2 : p/2+1;
    }
    printf("%d", sum);
    return 0;
}