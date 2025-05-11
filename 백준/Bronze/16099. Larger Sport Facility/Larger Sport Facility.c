#include <stdio.h>

int main(void) {
    int t;
    long long lt, wt, le, we;
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        scanf("%lld %lld %lld %lld", &lt, &wt, &le, &we);
        printf("%s\n", lt*wt == le*we ? "Tie" : (lt*wt > le*we ? "TelecomParisTech" : "Eurecom"));
    }
    return 0;
}