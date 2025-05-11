#include <stdio.h>

int main(void) {
    int n, count=0;
    char pPAp[1000001];
    scanf("%d\n%s", &n, pPAp);
    for(int i=0; i<n-3; i++) {
        if(pPAp[i] != 'p') continue;
        if(pPAp[i+1] != 'P') continue;
        if(pPAp[i+2] != 'A') continue;
        if(pPAp[i+3] != 'p') continue;
        i+=3;
        count++;
    }
    printf("%d", count);
    return 0;
}