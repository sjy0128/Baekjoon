#include <stdio.h>

int gcd(int a, int b);

int main(void) {
    int n, m, i, j, k, l, temp, a[100], max_gcd;
    char br;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        br = ' ';
        j = 0;
        max_gcd = 1;
        while(br != '\n') {
            scanf("%d", &a[j++]);
            if(scanf("%c", &br) == EOF) break;
        }
        for(k=0; k<j-1; k++) {
            for(l=k+1; l<j; l++) {
                temp = gcd(a[k], a[l]);
                if(temp > max_gcd) max_gcd = temp;
            }
        }
        printf("%d\n", max_gcd);
    }
    return 0;
}

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}