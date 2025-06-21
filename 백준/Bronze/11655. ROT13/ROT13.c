#include <stdio.h>

int main() {
    int i;
    char s[101];
    fgets(s, 101, stdin);
    for(i=0; s[i]!='\0'; i++) {
        if(s[i]>='a'&&s[i]<='z') {
            s[i] = (s[i]-'a'+13)%26 + 'a';
        } else if(s[i]>='A'&&s[i]<='Z') {
            s[i] = (s[i]-'A'+13)%26 + 'A';
        }
        printf("%c", s[i]);
    }
    return 0;
}