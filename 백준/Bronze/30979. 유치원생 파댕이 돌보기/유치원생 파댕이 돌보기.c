#include <stdio.h>
int main(void) {
    int t, n, temp, i, sum=0;
    scanf("%d\n%d", &t, &n);
    for(i=0; i<n; i++) {
        scanf("%d", &temp);
        sum += temp;
    }
    printf("Padaeng_i %s", sum >= t ? "Happy" : "Cry");
    return 0;
}