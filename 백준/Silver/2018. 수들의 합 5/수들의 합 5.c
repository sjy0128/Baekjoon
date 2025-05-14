#include <stdio.h>

int main(void) {
    int n, i, sum=1, count=0, s=1, e=1;
    scanf("%d", &n);
    while(s <= n) {
        if(sum == n) count++;
        if(sum >= n) {
            sum -= s++;
        } else {
            sum += ++e;
        }
    }
    printf("%d", count);
    return 0;
}