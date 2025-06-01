#include <stdio.h>
int main(void) {
    int n, i, count=0;
    char cn[21];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s", cn);
        if(cn[0]=='C') count++;
    }
    printf("%d", count);
    return 0;
}