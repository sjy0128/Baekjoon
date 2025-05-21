#include <stdio.h>

int main(void) {
    int n, i;
    char s[101];
    scanf("%d\n%s", &n, &s);
    for(i=0; i<n-1; i++) {
        if(s[i+1] == 'J') printf("%c\n", s[i]);
    }
    return 0;
}