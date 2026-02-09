#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000

typedef struct { int x, u; } data;

data q[MAX*2], d[MAX][2];
int main(void) {
    int t, n, f, r, x, l, *a, as, e;
    data p, c, s;
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
                    as = 1000;
                    a = (int *)malloc(sizeof(int) * as);
                    l = 0;
                    while(c.x != -1) {
                        a[l++] = c.u, c = d[c.x][c.u];
                        if(!(l % 1000)) {
                            as += 1000;
                            a = (int *)realloc(a, sizeof(int) * as);
                        }
                    }
                    while(l > 0) printf("%d", a[--l]);
                    e = 1;
                    free(a);
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