#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for(int i = n / 5; i >= 0; i--) {
        if(!((n - (i * 5)) % 2)) {
            printf("%d", i + (n - (i * 5)) / 2);
            return 0;
        }
    }
    printf("-1");
    return 0;
}