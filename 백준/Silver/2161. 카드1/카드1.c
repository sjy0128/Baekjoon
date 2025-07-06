#include <stdio.h>

int main(void) {
    int n, i, c[2000];
    scanf("%d", &n);
    for(i=0; i<n; i++) c[i] = i+1;
    i = 0;
    while(i < n) {
        printf("%d ", c[i++]);
        c[n++] = c[i++];
    }
    return 0;
}