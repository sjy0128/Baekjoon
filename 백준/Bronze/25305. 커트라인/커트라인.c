#include <stdio.h>

int main(void) {
    int n, k, x[1000], i, j, temp;
    scanf("%d %d", &n, &k);
    for(i=0; i<n; i++) scanf("%d", &x[i]);
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(x[i] < x[j]) {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    printf("%d", x[k-1]);
    return 0;
}