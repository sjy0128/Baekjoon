#include <stdio.h>

int main(void) {
    int n, v, c = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) c += scanf("%d", &v) * v;
    printf("Junhee is %scute!", c > (n / 2) ? "" : "not ");
    return 0;
}