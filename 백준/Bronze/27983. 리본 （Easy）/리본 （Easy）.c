#include <stdio.h>

int abs(int a) {return a < 0 ? -a : a;}

int main(void) {
    int n, i, j, x[1000], l[1000];
    char c[1000];
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &x[i]);
    for(i=0; i<n; i++) scanf("%d", &l[i]);
    scanf("\n");
    for(i=0; i<n; i++) scanf("%c ", &c[i]);
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(abs(x[i]-x[j])<=l[i]+l[j] && c[i]!=c[j]) {
                printf("YES\n%d %d", i+1, j+1);
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}