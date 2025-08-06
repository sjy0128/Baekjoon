#include <stdio.h>

int main(void) {
    int Q, i, j, q, n, x, y, z, a, b, p;
    scanf("%d", &Q);
    for(i=0; i<Q; i++) {
        scanf("%d %d", &q, &n);
        a = 0;
        b = n/2*8;
        p = 0;
        if(q == 1) {
            scanf("%d %d", &x, &y);
            while(x != p+1 && x+p != n && y != p+1 && y+p != n) {
                p++;
                a += b;
                b -= 8;
            }
            x -= p;
            y -= p;
            if(!b) {
                printf("%d\n", n*n);
                continue;
            }
            n -= p*2;
            if(x == 1 && y != n) {
                z = a+y;
            } else if(y == n && x != n) {
                z = a+n-1+x;
            } else if(x == n && y != 0) {
                z = a+(n-1)*2+n-y+1;
            } else {
                z = a+(n-1)*3+n-x+1;
            }
            printf("%d\n", z);
        } else {
            scanf("%d", &z);
            if(z == n*n) {
                printf("%d %d\n", n/2+1, n/2+1);
                continue;
            }
            while(z > a+b) {
                p++;
                a += b;
                b -= 8;
            }
            for(j=1; j<4 && z>a+j*b/4; j++);
            switch(j) {
                case 1:
                    y = p+z-a;
                    x = p+1;
                    break;
                case 2:
                    y = n-p;
                    x = p+z-b/4-a;
                    break;
                case 3:
                    y = n-(p+z-2*b/4-a)+1;
                    x = n-p;
                    break;
                case 4:
                    y = p+1;
                    x = n-(p+z-3*b/4-a)+1;
            }
            printf("%d %d\n", x, y);
        }
    }
}