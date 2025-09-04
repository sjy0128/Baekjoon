#include <stdio.h>

int main(void) {
    int n, t;
    short a[1000000]={1,};
    for(int i=1; i<1000; i++) {
        if(a[i]) continue;
        for(int j=(i+1)*2; j<=1000000; j+=(i+1)) a[j-1] = 1;
    }
    while(1) {
        scanf("%d", &n);
        if(!n) break;
        t = 0;
        for(int i=1; i<n; i++) {
            if(!a[i] && !a[n-i-2]) {
                printf("%d = %d + %d\n", n, i+1, n-i-1);
                t = 1;
                break;
            }
        }
        if(!t) printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}