#include <stdio.h>

int main(void) {
    int n, t, a[1000000], st[1000000], st_i=0, j;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i=n-1; i>=0; i--) {
        while(st_i>0 && a[i]>=st[st_i-1]) st_i--;
        if(st_i > 0) j = st[st_i-1];
        else j = -1;
        st[st_i++] = a[i];
        a[i] = j;
    } 
    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}