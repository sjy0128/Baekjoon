#include <stdio.h>

int main(void) {
    int abc[26]={0,};
    char str[101];
    scanf("%s", str);
    for(int i=0; str[i]!='\0'; i++) abc[str[i]-'a']++;
    for(int i=0; i<26; i++) printf("%d ", abc[i]);
    return 0;
}