#include <stdio.h>

int len(char *s);
void f(char *s, int d, int l, int r);

int main(void) {
    int t;
    char s[1001];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", s);
        f(s, 1, 0, len(s)-1);
    }
    return 0;
}

int len(char *s) {
    int r=0;
    for(; s[r]!=NULL; r++);
    return r;
}

void f(char *s, int d, int l, int r) {
    if(l >= r || s[l] != s[r]) {
        printf("%d %d\n", l >= r, d);
    }
    else f(s, d+1, l+1, r-1);
}