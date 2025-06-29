#include <stdio.h>

int main(void) {
    int t, i, j, k, len, tt;
    char s[10001], p[101];
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%s %s", s, p);
        for(len=0; p[len]!='\0'; len++);
        tt = 0;
        for(j=0; s[j]!='\0'; j++) {
            for(k=0; s[j+k]==p[k] && k<len; k++);
            if(k == len) j += k-1;
            tt++;
        }
        printf("%d\n", tt);
    }
    return 0;
}