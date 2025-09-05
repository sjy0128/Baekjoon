#include <stdio.h>

char m[512][512];

int htod(char *h);
void f(int n, int x, int y);

int main(void) {
    int n, t;
    char h[3];
    scanf("#define quadtree_width %d\n", &n);
    scanf("#define quadtree_height %d\n", &n);
    scanf("static char quadtree_bits[] = {\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n/8; j++) {
            scanf("0x%c%c,", &h[0], &h[1]);
            t = htod(h);
            for(int k=j*8+7, l=128; k>=j*8; k--, l/=2) {
                if(t >= l) {
                    m[i][k] = 'B';
                    t -= l;
                } else m[i][k] = 'W';
            }
        }
        scanf("\n");
    }
    printf("%d\n", n);
    f(n, 0, 0);
    return 0;
}

int htod(char *h) {
    int d=0;
    for(int i=0; h[i]!='\0'; i++) {
        d = d*16 + (h[i] >= '0' && h[i] <= '9' ? h[i]-'0' : h[i]-'a'+10);
    }
    return d;
}

void f(int n, int x, int y) {
    int s=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) s += m[x+i][y+j] == 'B';
    }
    if(!s || s == n*n) {
        printf("%c", s ? 'B' : 'W');
        return;
    }
    printf("Q");
    f(n/2, x, y);
    f(n/2, x, y+n/2);
    f(n/2, x+n/2, y);
    f(n/2, x+n/2, y+n/2);
}