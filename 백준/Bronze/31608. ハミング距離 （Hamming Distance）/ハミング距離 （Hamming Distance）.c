#include <stdio.h>

int main(void) {
    int n, i, hd=0;
    char s[101], t[101];
    scanf("%d\n%s\n%s", &n, s, t);
    for(i=0; i<n; i++) {
        if(s[i]!=t[i]) hd++;
    }
    printf("%d", hd);
    return 0;
}