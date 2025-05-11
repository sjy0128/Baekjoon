#include <stdio.h>
int main(void) {
    char str[101];
    int az[26];
    scanf("%s", str);
    for(int i=0; i<26; i++) {
        az[i] = -1;
    }
    for(int i=0; str[i]!='\0'; i++) {
        int idx = (int)str[i]-'a';
        if(az[idx]==-1) az[idx] = i;
    }
    for(int i=0; i<26; i++) {
        printf("%d ", az[i]);
    }
}