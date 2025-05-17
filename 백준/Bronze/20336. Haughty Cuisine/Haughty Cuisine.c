#include <stdio.h>
int main(void) {
    int n, d, i;
    char m[42][21];
    scanf("%d", &n);
    scanf("%d", &d);
    for(i=0; i<d; i++) {
        scanf("%s", m[i]);
    }
    printf("%d\n", d);
    for(i=0; i<d; i++) {
        printf("%s\n", m[i]);
    }
    return 0;
}