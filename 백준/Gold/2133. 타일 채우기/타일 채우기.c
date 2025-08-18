#include <stdio.h>

int main(void) {
    int n, a[15] = {3, 11,};
    scanf("%d", &n);
    if(n%2) printf("0");
    else {
        for(int i=2; i<n/2; i++) a[i] = a[i-1]*4 - a[i-2];
        printf("%d", a[n/2-1]);
    }
    return 0;
}