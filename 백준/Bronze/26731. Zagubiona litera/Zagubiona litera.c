#include <stdio.h>

int main() {
    int az[26]={0,}, i;
    char temp;
    for(i=0; i<25; i++) {
        scanf("%c", &temp);
        az[temp-'A'] = 1;
    }
    for(i=0; i<26; i++) {
        if(az[i] == 0) {
            printf("%c", i+'A');
            break;
        }
    }
    return 0;
}