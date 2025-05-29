#include <stdio.h>
int main(void) {
    int n, a[1000], b, i, count=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++) {
        scanf("%d", &b);
        if(b >= a[i]) count++;
    }
    printf("%d", count);
    return 0;
}