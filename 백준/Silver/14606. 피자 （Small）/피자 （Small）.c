#include <stdio.h>

int main(void) {
    int n, a[11] = {0,}, max, temp;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++) {
        max = 0;
        for(int j = 1; j < i; j++) {
            temp = j * (i - j) + a[j] + a[i - j];
            if(temp > max) max = temp;
        }
        a[i] = max;
    }
    printf("%d", a[n]);
    return 0;
}