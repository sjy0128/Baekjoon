#include <stdio.h>

int main(void) {
    int a[3];
    char t;
    scanf("%d %d %d\n", &a[0], &a[1], &a[2]);
    if(a[0] > a[1]) a[0] ^= a[1] ^= a[0] ^= a[1];
    if(a[0] > a[2]) a[0] ^= a[2] ^= a[0] ^= a[2];
    if(a[1] > a[2]) a[1] ^= a[2] ^= a[1] ^= a[2];
    for(int i=0; i<3; i++) {
        scanf("%c", &t);
        printf("%d ", a[t-'A']);
    }
    return 0;
}