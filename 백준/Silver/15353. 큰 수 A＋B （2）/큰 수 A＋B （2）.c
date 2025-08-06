#include <stdio.h>

int main(void) {
    int la, lb, i=0, r[10002]={0,}, c;
    char a[10002], b[10002];
    scanf("%s %s", a, b);
    for(la=0; a[la]!='\0'; la++);
    for(lb=0; b[lb]!='\0'; lb++);
    for(i=0; i<(la>lb?la:lb); i++) {
        if(i < la) r[i] += a[la-i-1]-'0';
        if(i < lb) r[i] += b[lb-i-1]-'0';
        if(r[i] >= 10) {
            r[i] -= 10;
            r[i+1]++;
            c = 1;
        } else c = 0;
    }
    for(i=i+c-1; i>=0; i--) printf("%d", r[i]);
    return 0;
}