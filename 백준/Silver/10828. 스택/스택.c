#include <stdio.h>
int main(void) {
    int n, i, x, s[10000], size=0;
    char c[6];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s", c);
        switch(c[1]) {
            case 'u':
                scanf("%d", &x);
                s[size++] = x;
                break;
            case 'o':
                printf("%d\n", size != 0 ? s[size-1] : -1);
                if(c[0] == 'p' && size != 0) size--;
                break;
            case 'i':
                printf("%d\n", size);
                break;
            case 'm':
                printf("%d\n", size == 0 ? 1 : 0);
                break;
        }
    }
    return 0;
}