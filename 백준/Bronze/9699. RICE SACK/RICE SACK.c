#include <stdio.h>

int main(void) {
    int n, max, temp;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        max = 0;
        for(int j=0; j<5; j++) {
            scanf("%d", &temp);
            max = max > temp ? max : temp;
        }
        printf("Case #%d: %d\n", i, max);
    }
    return 0;
}