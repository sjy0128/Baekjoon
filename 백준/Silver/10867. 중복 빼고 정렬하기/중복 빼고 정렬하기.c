#include <stdio.h>

int main() {
    int n, i, num, a[2001]={0,}, min=1000, max=-1000;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &num);
        a[num+1000]=1;
        if(num < min) min = num;
        if(num > max) max = num;
    }
    for(i=min+1000; i<=max+1000; i++) {
         if(a[i] == 1) printf("%d ", i-1000);
    }
    return 0;
}