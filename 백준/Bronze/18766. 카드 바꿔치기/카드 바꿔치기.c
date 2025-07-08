#include <stdio.h>

int main(void) {
    int t, n, i, j, k, a[200], b[200], temp, ch;
    char c[3];
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        for(j=0; j<n; j++) {
            scanf("%s", c);
            a[j] = c[0]*100 + c[1];
        }
        for(j=0; j<n-1; j++) {
            for(k=j+1; k<n; k++) {
                if(a[k] < a[j]) {
                    temp = a[k];
                    a[k] = a[j];
                    a[j] = temp;
                }
            }
        }
        for(j=0; j<n; j++) {
            scanf("%s", c);
            b[j] = c[0]*100 + c[1];
        }
        for(j=0; j<n-1; j++) {
            for(k=j+1; k<n; k++) {
                if(b[k] < b[j]) {
                    temp = b[k];
                    b[k] = b[j];
                    b[j] = temp;
                }
            }
        }
        ch = 0;
        for(j=0; j<n; j++) {
            if(a[j] != b[j]) {
                ch = 1;
                break;
            }
        }
        printf(ch ? "CHEATER\n" : "NOT CHEATER\n");
    }
    return 0;
}