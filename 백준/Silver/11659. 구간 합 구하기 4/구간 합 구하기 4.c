#include <stdio.h>

int main(void) {
    int arr[100001]={0,}, n, m, i, s, e, sum=0, temp;
    scanf("%d %d", &n, &m);
    for(i=1; i<=n; i++) {
        scanf("%d", &temp);
        sum += temp;
        arr[i] = sum;
    }
    for(i=0; i<m; i++) {
        scanf("%d %d", &s, &e);
        printf("%d\n", arr[e] - arr[s-1]);
    }
    return 0;
}