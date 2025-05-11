#include <stdio.h>

int main() {
    char s[3]={'A','B','C'}, c[4]={'B','A','B','C'}, h[6]={'C','C','A','A','B','B'}, temp;
    int sc=0, cc=0, hc=0, n;
    scanf("%d\n", &n);
    for(int i=0; i<n; i++) {
        scanf("%c", &temp);
        if(temp==s[i%3]) sc++;
        if(temp==c[i%4]) cc++;
        if(temp==h[i%6]) hc++;
    }
    n = sc > cc ? (sc > hc ? sc : hc) : (cc > hc ? cc : hc);
    printf("%d\n", n);
    if(sc==n) printf("Adrian\n");
    if(cc==n) printf("Bruno\n");
    if(hc==n) printf("Goran\n");
    return 0;
}