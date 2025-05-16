#include <stdio.h>
int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    if(m <= 2) printf("NEWBIE!");
    else if(m <= n) printf("OLDBIE!");
    else printf("TLE!");
    return 0;
}