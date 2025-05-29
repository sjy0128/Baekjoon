#include <stdio.h>
int main(void) {
    int n, i, j, count=0;
    char s[501];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s", s);
        for(j=0; s[j+1]!='\0'; j++) {
            if((s[j]=='0' && s[j+1]=='1') || (s[j]=='O' && s[j+1]=='I')) {
                count++;
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}