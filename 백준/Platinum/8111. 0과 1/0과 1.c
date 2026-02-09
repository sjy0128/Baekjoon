#include <stdio.h>
#define MAX 20000
#define MAX_DIGIT 100

typedef struct { int x, u; } data;

int main(void) {
    int t, n, f, r, x, l, a[MAX_DIGIT], e;
    data q[MAX*2], d[MAX][2], p, c, s;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        if(n == 1) {
            printf("1\n");
            continue;
        }
        for(int i = 0; i < n; i++) d[i][0].x = d[i][1].x = -1;
        f = r = e = 0;
        s = (data){1, 1};
        d[s.x][s.u].x = -1;
        q[r++] = s;
        while(f != r && !e) {
            p = q[f++];
            for(int u = 0; u <= 1; u++) {
                x = (p.x * 10 + u) % n;
                c = (data){x, u};
                if(d[x][u].x != -1) break;
                d[x][u] = p;
                if(!x) {
                    l = 0;
                    while(c.x != -1) a[l++] = c.u, c = d[c.x][c.u];
                    while(l > 0) printf("%d", a[--l]);
                    e = 1;
                    break;
                }
                q[r++] = c;
            }
        }
        if(!e) printf("BRAK");
        printf("\n");
    }
    return 0;
}