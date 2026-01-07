#include <stdio.h>
#define MAX 100001

int main(void) {
    long long ans = 0;
    int a = 0, z = 0;
    char s[MAX], cur = 'A';
    scanf("%s", s);
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == cur + 1) cur++;
        else if(s[i] != cur) {
            ans += (long long)a * z;
            a = z = 0;
            cur = 'A';
        }
        if(s[i] == cur) {
            if(s[i] == 'A') a++;
            if(s[i] == 'Z') z++;
        }
    }
    ans += (long long)a * z;
    printf("%lld", ans);
    return 0;
}