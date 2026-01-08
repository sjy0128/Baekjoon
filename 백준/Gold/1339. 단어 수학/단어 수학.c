#include <stdio.h>

int main(void) {
    int n, l, val[26] = {0,}, sum = 0;
    char num[9];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%s", num);
        for(l = 0; num[l + 1] != '\0'; l++);
        for(int w = 1; l >= 0; l--, w *= 10) val[num[l] - 'A'] += w;
    }
    for(int i = 0; i < 25; i++) {
        for(int j = i + 1; j < 26; j++) {
            if(val[i] < val[j]) val[i] ^= val[j] ^= val[i] ^= val[j];
        }
    }
    for(int i = 0; i < 10; i++) sum += val[i] * (9 - i);
    printf("%d", sum);
    return 0;
}