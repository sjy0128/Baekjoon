#include <stdio.h>

int main(void) {
    int n, t, tf=1;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &t);
        if(t < 48) tf = 0;
    }
    printf(tf ? "True" : "False");
    return 0;
}