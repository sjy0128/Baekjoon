#include <stdio.h>

int main(void) {
    int t, n, c;
    short a[1000000]={1,};
    for(int i=1; i<1000; i++) {
        if(a[i]) continue;
        for(int j=(i+1)*2; j<=1000000; j+=(i+1)) a[j-1] = 1;
    }
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        c = 0;
        for(int i=1; i<n/2; i++) {
            if(!a[i] && !a[n-i-2]) c++;
        }
        printf("%d\n", c);
    }
    return 0;
}