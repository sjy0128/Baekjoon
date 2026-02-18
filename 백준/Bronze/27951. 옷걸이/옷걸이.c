#include <stdio.h>
#define MAX 1000000

int main(void) {
    int n, u, d, c[3]={0,}, a[MAX], t;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        c[a[i]-1]++;
    }
    scanf("%d %d", &u, &d);
    if(c[0]+c[2] < u || c[1]+c[2] < d) printf("NO");
    else {
        printf("YES\n");
        t = u - c[0];
        for(int i = 0; i < n; i++) printf(a[i] == 1 || a[i] == 3 && t-- > 0 ? "U" : "D");
    }
    return 0;
}