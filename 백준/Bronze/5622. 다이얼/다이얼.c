#include <stdio.h>

int main(void) {
    int abc[26], ans = 0;
    char str[16];
    for(int i = 0, k = 3; k < 11; k++) {
        for(int j = 0; j < 3 + (k == 8 || k == 10); j++) abc[i++] = k;
    }
    scanf("%s", str);
    for(int i = 0; str[i]; i++) ans += abc[str[i] - 'A'];
    printf("%d", ans);
    return 0;
}