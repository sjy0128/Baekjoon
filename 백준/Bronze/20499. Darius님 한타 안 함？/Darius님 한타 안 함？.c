#include <stdio.h>

int main() {
    int k, d, a;
    scanf("%d/%d/%d", &k, &d, &a);
    printf(k + a < d || d == 0 ? "hasu" : "gosu");
    return 0;
}