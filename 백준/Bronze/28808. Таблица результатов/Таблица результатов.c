#include <stdio.h>

int main(void) {
    int n, m, i, j, count=0;
    char s[101];
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++) {
        scanf("%s", s);
        for(j=0; s[j]!='\0'; j++) {
            if(s[j] == '+') {
                count++;
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}