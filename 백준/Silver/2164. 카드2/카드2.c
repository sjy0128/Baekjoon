#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i, j;
    scanf("%d", &n);
    int *c = (int *)malloc(sizeof(int)*n*2);
    for(i=0; i<n; i++) c[i] = i+1;
    i = 0;
    j = n-1;
    while(i != j) {
        i += 2;
        c[++j] = c[i-1];
    }
    printf("%d", c[i]);
    free(c);
    return 0;
}