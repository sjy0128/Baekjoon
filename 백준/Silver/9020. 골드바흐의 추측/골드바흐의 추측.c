#include <stdio.h>

int main(void) {
    int t, n, x, y;
    short a[10000]={1,};
    for(int i=1; i<100; i++) {
        if(a[i]) continue;
        for(int j=(i+1)*2; j<=10000; j+=(i+1)) a[j-1] = 1;
    }
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        x = y = 0;
        for(int i=1; i<n; i++) {
            if(!a[i] && !a[n-i-2]) {
                if((y-x) > (i*2-n+2) || !x) x = i+1, y = n-i-1;
            }
        }
        printf("%d %d\n", x, y);
    }
    return 0;
}