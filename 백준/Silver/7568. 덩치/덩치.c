#include <stdio.h>

int main(void) {
    int n, i, j, x[50], y[50], c;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    for(i=0; i<n; i++) {
        c = 0;
        for(j=0; j<n; j++) {
            if(x[j] > x[i] && y[j] > y[i]) c++;
        }
        printf("%d ", c+1);
    }
    return 0;
}