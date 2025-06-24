#include <stdio.h>

int main() {
    int n, i, s=0, e=0, x, a[10000];
    char c[6];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s", c);
        switch(c[1]) {
            case 'u':
                scanf("%d", &x);
                a[e++] = x;
                break;
            case 'o':
                printf("%d\n", e - s > 0 ? a[s++] : -1);
                break;
            case 'i':
                printf("%d\n", e - s);
                break;
            case 'm':
                printf("%d\n", e - s == 0);
                break;
            case 'r':
                printf("%d\n", e - s > 0 ? a[s] : -1);
                break;
            case 'a':
                printf("%d\n", e - s > 0 ? a[e-1] : -1);
                break;
        }
    }
    return 0;
}