#include <stdio.h>

int a;
char s[200000], m[512][512];

void f(int n, int x, int y);

int main(void) {
    int n, p;
    scanf("%d\n%s", &n, s);
    f(n, 0, 0);
    printf("#define quadtree_width %d\n", n);
    printf("#define quadtree_height %d\n", n);
    printf("static char quadtree_bits[] = {\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n/8; j++) {
            p = 0;
            for(int k=j*8, l=1; k<j*8+8; k++, l*=2) {
                p += (m[i][k] == 'B')*l;
            }
            printf("0x%02x,", p);
        }
        printf("\n");
    }
    printf("};");
    return 0;
}

void f(int n, int x, int y) {
    if(s[a] == '\0') return;
    if(s[a] == 'Q') {
        a++;
        f(n/2, x, y);
        a++;
        f(n/2, x, y+n/2);
        a++;
        f(n/2, x+n/2, y);
        a++;
        f(n/2, x+n/2, y+n/2);
        return;
    }
    for(int i=x; i<x+n; i++) {
        for(int j=y; j<y+n; j++) m[i][j] = s[a];
    }
}