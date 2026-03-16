#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) printf(!j || j == n - 1 || (i <= n / 2 && (j == i || j == n - i - 1))  ? "#" : ".");
            printf("\n");
        }
    }
    return 0;
}