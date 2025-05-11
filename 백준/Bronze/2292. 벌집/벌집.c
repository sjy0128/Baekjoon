#include <stdio.h>
int main(void) {
    int n, i, r=0;
    scanf("%d", &n);
    for(i=1; i<n; i+=(6*r)) r++;
    printf("%d", n == 1 ? 1 : r+1);
    return 0;
}