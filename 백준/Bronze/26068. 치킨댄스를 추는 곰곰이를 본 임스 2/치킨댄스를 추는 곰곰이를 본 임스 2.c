#include <stdio.h>

int main(void) {
    int n, x, i, count=0;
    scanf("%d\n", &n);
    for(i=0; i<n; i++) {
        scanf("D-%d\n", &x);
        if(x <= 90) count++;
    }
    printf("%d", count);
    return 0;
}