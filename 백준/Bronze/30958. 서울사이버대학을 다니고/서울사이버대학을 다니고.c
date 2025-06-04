#include <stdio.h>

int main(void) {
    int n, i, abc[26]={0,}, max=0;
    char temp;
    scanf("%d\n", &n);
    for(i=0; i<n; i++) {
        scanf("%c", &temp);
        if(temp >= 'a' && temp <= 'z') {
            abc[temp-'a']++;
            if(abc[temp-'a'] > max) max = abc[temp-'a'];
        }
    }
    printf("%d", max);
    return 0;
}