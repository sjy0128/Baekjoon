#include <stdio.h>
int main(void) {
    int n, k=0;
    scanf("%d", &n);
    while(n != k * k + k + 1) k++;
    printf("%d", k);
    return 0;
}