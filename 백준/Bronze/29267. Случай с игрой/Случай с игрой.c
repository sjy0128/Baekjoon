#include <stdio.h>

int main(void) {
    int n, k, b=0, s=0, i;
    char a[6];
    scanf("%d %d", &n, &k);
    for(i=0; i<n; i++) {
        scanf("%s", a);
        switch(a[1]) {
            case 'a':
                s = b;
                break;
            case 'o':
                b = s;
                break;
            case 'h':
                b--;
                break;
            case 'm':
                b += k;
                break;
        }
        printf("%d\n", b);
    }
    return 0;
}