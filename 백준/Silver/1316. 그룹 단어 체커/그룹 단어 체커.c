#include <stdio.h>

int main(void) {
    int n, az[26], isGW, c = 0;
    char s[101];
    scanf("%d", &n);
    while(n--) {
        isGW = 1;
        scanf("%s", s);
        for(int i=0; i<26; i++) az[i] = 0;
        for(int i=0; s[i]!='\0'; i++) {
            if(az[s[i]-'a'] && s[i-1] != s[i]) {
                isGW = 0;
                break;
            }
            az[s[i]-'a'] = 1;
        }
        if(isGW) c++;
    }
    printf("%d", c);
    return 0;
}