#include <stdio.h>

int main(void) {
    int n, cnt = 0;
    scanf("%d", &n);
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= i; j++) {
            cnt += i + j;
        }
    }
    printf("%d", cnt);
    return 0;
}