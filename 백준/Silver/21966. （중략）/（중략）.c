#include <stdio.h>
int main(void) {
    int i, len, a=2;
    char s[100001];
    scanf("%d\n%s", &len, s);
    if(len <= 25) printf("%s", s);
    else {
        for(i=11; i<len-12; i++) {
            if(s[i]=='.') {
                a = 3;
                break;
            }
        }
        for(i=0; i<(a == 2 ? 11 : 9); i++) printf("%c", s[i]);
        printf(a == 2 ? "..." : "......");
        for(i=len-(a == 2 ? 11 : 10); i<len; i++) printf("%c", s[i]);
    }
    return 0;
}