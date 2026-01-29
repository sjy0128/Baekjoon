#include <stdio.h>

int main(void) {
    int t, l, c, d[10];
    long long sum;
    char s[17];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", s);
        for(int i = 0; i < 10; i++) d[i] = 0;
        for(l = 0; s[l] != '\0'; l++) d[s[l]-'0']++;
        sum = 0, c = 9;
        while(l) {
            while(!d[c]) c--;
            sum = sum * (l > 1 ? 10 : 1) + c;
            l--, d[c]--;
        }
        printf("%lld\n", sum);
    }
    return 0;
}