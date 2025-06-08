#include <stdio.h>
int main(void) {
    int i, j;
    char s[100001], t[100001];
    while(scanf("%s %s", s, t) != EOF) {
        for(i=0, j=0; s[i]!='\0' && t[j]!='\0'; j++) {
            if(s[i]==t[j]) i++;
        }
        printf(s[i]=='\0' ? "Yes\n" : "No\n");
    }
    return 0;
}