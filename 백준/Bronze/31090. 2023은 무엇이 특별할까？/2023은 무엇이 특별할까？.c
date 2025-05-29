#include <stdio.h>
int main(void) {
    int t, n, i;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        printf((n+1) % (n%100) == 0 ? "Good\n" : "Bye\n");
    }
    return 0;
}