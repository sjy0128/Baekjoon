#include <stdio.h>
int main(void) {
    int x, y, i;
    scanf("%d %d", &x, &y);
    for(i=(x>y?x:y); i>=1; i--) printf(x>=i&&y>=i ? "2" : "1");
    return 0;
}