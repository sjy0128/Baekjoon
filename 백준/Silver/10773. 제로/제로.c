#include <stdio.h>
#include <stdlib.h>

int main() {
    int k, i, size=0, sum=0;
    scanf("%d", &k);
    int *a = (int *)malloc(k*sizeof(int));
    for(i=0; i<k; i++) {
        scanf("%d", &a[size]);
        if(a[size] == 0) {
            sum -= a[--size];
        } else sum += a[size++];
    }
    free(a);
    printf("%d", sum);
    return 0;
}