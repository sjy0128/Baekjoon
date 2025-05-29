#include <stdio.h>
int main(void) {
    int n, x[1000], y[1000], min=0, i;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &x[i], &y[i]);
        if(y[i] < y[min]) min = i;
    }
    printf("%d %d", x[min], y[min]);
    return 0;
}