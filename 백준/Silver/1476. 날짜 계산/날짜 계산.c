#include <stdio.h>

int main(void) {
    int e, s, m, a, b, c, i;
    a = b = c = i = 1;
    scanf("%d %d %d", &e, &s, &m);
    while((i-1)%15+1 != e || (i-1)%28+1 != s || (i-1)%19+1 != m) i++;
    printf("%d", i);
    return 0;
}