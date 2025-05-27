#include <stdio.h>

int main() {
    int m, n;
    scanf("%d\n%d", &m, &n);
    if(m==1 || n==1) printf("%d", m*n);
    else printf("%d", m*2 + (n-2)*2);
    return 0;
}