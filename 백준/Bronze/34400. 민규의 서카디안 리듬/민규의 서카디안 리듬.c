#include <stdio.h>

int main(void) {
    int T, t;
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &t);
        printf(t % 25 >= 17 ? "OFFLINE\n" : "ONLINE\n");
    }
    return 0;
}