#include <stdio.h>

int main(void) {
    int n, f;
    scanf("%d\n%d", &n, &f);
    n -= n % 100;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(!((n + i * 10 + j) % f)) {
                printf("%d%d", i, j);
                return 0;
            }
        }
    }
    return 0;
}