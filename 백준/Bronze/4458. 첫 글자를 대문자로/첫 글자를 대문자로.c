#include <stdio.h>

int main(void) {
    int n;
    char s[32];
    scanf("%d\n", &n);
    while(n--) {
        fgets(s, 32, stdin);
        if(s[0] >= 'a' && s[0] <= 'z') s[0] += 'A' - 'a';
        printf("%s", s);
    }
    return 0;
}