#include <stdio.h>

int main(void) {
    int n, digit[10] = {0,}, a, b, c;
    scanf("%d", &n);
    for(int i = 1; i <= n; i *= 10) {
        a = n / (i * 10) * i;
        b = n / i % 10;
        c = a * 10 + i - 1;
        if(a) digit[0] += n >= c ? a : a - (c - n);
        for(int j = 1; j < 10; j++) digit[j] += a;
        for(int j = 1; j < b; j++) digit[j] += i;
        if(b) digit[b] += n % i + 1;
    }
    for(int i = 0; i < 10; i++) printf("%d ", digit[i]);
    return 0;
}