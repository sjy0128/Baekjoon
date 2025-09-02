#include <stdio.h>

int main(void) {
    int n, a1, a2;
    scanf("%d", &n);
    for(int i=0; i<n-2; i++) scanf("%d", &a1);
    scanf("%d %d", &a1, &a2);
    printf("%d", a2+(a2-a1));
    return 0;
}