#include <stdio.h>

int main(void) {
    int t, c, a[] = {25, 10, 5, 1};
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &c);
        for(int i = 0; i < 4; i++) {
            printf("%d ", c / a[i]);
            c %= a[i];
        }
        printf("\n");
    }
    return 0;
}