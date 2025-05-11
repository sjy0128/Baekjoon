#include <stdio.h>

int main() {
    int n, p, temp;
    while(1) {
        scanf("%d %d", &n, &p);
        if(n == 0) break;
        temp = p%2==0;
        if(p <= n/2) {
            printf("%d ", p+(temp ? -1 : 1));
        }
        printf("%d %d ", n-p+temp, n-p+temp+1);
        if(p > n/2) {
            printf("%d ", p+(temp ? -1 : 1));
        }
        printf("\n");
    }
    return 0;
}