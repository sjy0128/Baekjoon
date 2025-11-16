#include <stdio.h>
#define MAX 1000

int main(void) {
    int a[MAX][5], n, t[MAX], c, m=0, mi;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<5; j++) scanf("%d", &a[i][j]);
    }
    for(int i=0; i<n; i++) {
        c = 0;
        for(int j=0; j<n; j++) t[j] = 0;
        for(int j=0; j<5; j++) {
            for(int k=0; k<n; k++) {
                if(a[k][j] == a[i][j] && !t[k]) {
                    t[k] = 1;
                    c++;
                }
            }
        }
        if(c > m) {
            m = c;
            mi = i;
        }
    }
    printf("%d", mi+1);
    return 0;
}