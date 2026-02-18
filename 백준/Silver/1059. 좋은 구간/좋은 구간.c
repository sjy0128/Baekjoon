#include <stdio.h>

int main(void) {
    int l, s[51]={0,}, n, ai=-1, bi=-1;
    scanf("%d", &l);
    for(int i = 1; i<=l; i++) scanf("%d", &s[i]);
    scanf("%d", &n);
    for(int i = 0; i<=l; i++) {
        if(s[i]<=n&&(ai==-1||s[i]>s[ai])) ai=i;
        if(s[i]>=n&&(bi==-1||s[i]<s[bi])) bi=i;
    }
    printf("%d", (ai!= bi&&ai!=-1&&bi!=-1)*((n-s[ai])*(s[bi]-n)-1));
    return 0;
}