#include <stdio.h>
int main(void) {
    int s, m, l;
    scanf("%d\n%d\n%d", &s, &m, &l);
    printf(s + 2*m + 3*l >= 10 ? "happy" : "sad");
    return 0;
}