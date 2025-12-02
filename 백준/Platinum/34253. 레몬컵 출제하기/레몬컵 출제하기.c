#include <stdio.h>

int main(void) {
    int n, k, z=0, x, i, a, b, t[300000]={0,}, l=0;
    scanf("%d %d", &n, &k);
    char s[21];
    
    while(n--) {
        scanf("%s", s);
        x = 2, a = 0;
        for(i=0; i<k; i++) {
            a = a*2 + s[z ? k-i-1 : i] - '0';
        }
        b = l;
        for(i=0; i<b; i++) {
            if((a | t[i]) == a && x != 1) t[l++] = a, x = 1;
            if((a | t[i]) == t[i]) {
                x = 0;
                t[l++] = a;
                break;
            }
        }
        if(x == 2) t[l++] = a;
        z = x;
        printf(x ? "AdHoc\n" : "WellKnown\n");
    }
    return 0;
}