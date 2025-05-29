#include <stdio.h>

int main(void) {
    int n, m, k, a, b, c, j, r, s;
    scanf("%d %d %d %d %d %d", &n, &m, &k, &a, &b, &c);
    j = a * n;
    r = b * m;
    s = c * k;
    if(j >= r && j >= s) printf("Joffrey ");
    if(r >= s && r >= j) printf("Robb ");
    if(s >= j && s >= r) printf("Stannis ");
    return 0;
}