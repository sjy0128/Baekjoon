#include <stdio.h>

int main(void) {
    int n, i, t, a[100000], j=1, k=0, l=0;
    char r[200000];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &t);
        while(!l || a[l-1] != t) {
            if(l >= n) {
                printf("NO");
                return 0;
            }
            a[l++] = j++;
            r[k++] = '+';
        }
        l--;
        r[k++] = '-';
    }
    for(i=0; i<k; i++) {
        printf("%c\n", r[i]);
    }
    return 0;
}