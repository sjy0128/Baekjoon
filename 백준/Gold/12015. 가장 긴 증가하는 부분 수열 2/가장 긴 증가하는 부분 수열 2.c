#include <stdio.h>
#define MAX 1000001

int a[MAX], r;

int main(void) {
    int n, ai, s, e, m;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &ai);
        if(!r || a[r-1] < ai) a[r++] = ai;
        else {
            s = 0, e = r-1;
            while(s < e) {
                m = (s + e) / 2;
                if(a[m] < ai) s = m+1;
                else e = m;
            }
            a[s] = ai;
        }
    }
    printf("%d", r);
    return 0;
}