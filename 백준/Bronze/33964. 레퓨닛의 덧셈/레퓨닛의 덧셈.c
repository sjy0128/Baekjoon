#include <stdio.h>
int main(void) {
    int x, y, i, j, sum=0;
    scanf("%d %d", &x, &y);
    for(i=0, j=1; i<x; i++, j*=10) sum += j*1;
    for(i=0, j=1; i<y; i++, j*=10) sum += j*1;
    printf("%d", sum);
    return 0;
}