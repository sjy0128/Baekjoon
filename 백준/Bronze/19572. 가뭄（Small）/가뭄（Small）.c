#include <stdio.h>

int main(void) {
    int d1, d2, d3, da, db, dc;
    scanf("%d %d %d", &d1, &d2, &d3);
    da = d1 + d2 - d3;
    db = d1 - d2 + d3;
    dc = -d1 + d2 + d3;
    if(da <= 0 || db <= 0 || dc <= 0) printf("-1");
    else printf("1\n%.1f %.1f %.1f", (float)da/2, (float)db/2, (float)dc/2);
    return 0;
}