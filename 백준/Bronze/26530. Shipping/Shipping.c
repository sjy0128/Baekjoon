#include <stdio.h>

int main(void) {
    int x, n, amount, i, j;
    double price, sum;
    char a[101];
    scanf("%d", &x);
    for(i=0; i<x; i++) {
        sum=0;
        scanf("%d", &n);
        for(j=0; j<n; j++) {
            scanf("%s %d %lf", a, &amount, &price);
            sum += amount * price;
        }
        printf("$%.2lf\n", sum);
    }
    return 0;
}