#include <stdio.h>

int main(void) {
    int abc[26]={0,}, max=0, idx;
    char temp;
    while(scanf("%c",&temp)) {
        if(temp == '\n') break;
        idx = temp>='a' ? temp-'a' : temp-'A';
        max = max > ++abc[idx] ? max : abc[idx];
    }
    idx=-1;
    for(int i=0; i<26; i++) {
        if(abc[i] == max) {
            if(idx != -1) {
                printf("?");
                return 0;
            }
            idx = i;
        }
    }
    printf("%c", idx+'A');
    
    return 0;
}