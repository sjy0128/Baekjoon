#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m, i, j, sum=0, count=0, temp;
    scanf("%d\n%d", &n, &m);
    int *a = (int*)malloc(sizeof(int)*n);
    for(i=0; i<n; i++) {
        scanf("%d", &temp);
        a[i] = temp;
    }
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(a[i] + a[j] == m) count++;
        }
    }
    printf("%d", count);
    free(a);
    return 0;
}