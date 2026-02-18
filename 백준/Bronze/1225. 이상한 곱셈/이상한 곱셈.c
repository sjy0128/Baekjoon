#include <stdio.h>
#define MAX 10000

int main(void) {
    long long ans = 0;
    char a[MAX + 1], b[MAX + 1];
    scanf("%s %s", a, b);
    for(int i = 0; a[i]; i++) {
        for(int j = 0; b[j]; j++) ans += (a[i] - '0') * (b[j] - '0');
    }
    printf("%lld", ans);
    return 0;
}