#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                printf(!i || !j || i == n - 1 || j == n - 1 ? "#" : "J");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}