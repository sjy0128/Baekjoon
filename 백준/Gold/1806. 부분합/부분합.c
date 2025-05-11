#include <stdio.h>

int main(void) {
    int n, S, arr[100000]={0,}, i, s=0, e=0, sum=0, len=0;
    scanf("%d %d", &n, &S);
    for(i=0; i<n; i++) scanf("%d", &arr[i]);
    while(e <= n) {
        if(sum >= S) {
            len = e-s < len || len == 0 ? e-s : len;
            sum -= arr[s++];
        } else {
            sum += arr[e++];
        }
    }
    printf("%d", len == 0 ? 0 : len);
    return 0;
}