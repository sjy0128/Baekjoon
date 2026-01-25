#include <stdio.h>

int f(const char *a, const int fs);

int main(void) {
    char a[8], b[8];
    scanf("%s %s", a, b);
    printf("%d %d", f(a, 5) + f(b, 5), f(a, 6) + f(b, 6));
    return 0;
}

int f(const char *s, const int fs) {
    int a = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        a = a * 10 + (s[i] == '5' || s[i] == '6' ? fs : s[i] - '0');
    }
    return a;
}