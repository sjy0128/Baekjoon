#include <stdio.h>

int main(void) {
    int n, i;
    char s[101];
    scanf("%d\n%s", &n, s);
    if(s[n-1]=='G') {
        for(i=0; i<n-1; i++) printf("%c", s[i]);
    } else printf("%sG", s);
    return 0;
}