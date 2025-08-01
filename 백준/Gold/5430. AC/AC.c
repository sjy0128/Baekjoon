#include <stdio.h>

int main(void) {
    int t, i, j, k, l, n, a[100000], s, r, e;
    char p[100000], c, str[400002];
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%s\n%d\n%s", p, &n, str);
        for(j=0, k=1; j<n; j++, k++) {
            a[j] = 0;
            while(str[k] != ',' && str[k] != ']') a[j] = a[j]*10 + str[k++]-'0';
        }
        s = 0;
        r = 0;
        e = 0;
        for(j=0; p[j]!='\0'; j++) {
            if(p[j] == 'R') r = !r;
            if(p[j] == 'D') {
                if(n <= 0) {
                    e = 1;
                    break;
                }
                if(!r) s++;
                n--;
            }
        }
        if(e) printf("error\n");
        else {
            printf("[");
            if(r) {
                for(j=s+n-1; j>=s+1; j--) {
                    printf("%d,", a[j]);
                }
            } else {
                for(j=s; j<=s+n-2; j++) {
                    printf("%d,", a[j]);
                }
            }
            if(n) printf("%d", a[j]);
            printf("]\n");
        }
    }
    return 0;
}