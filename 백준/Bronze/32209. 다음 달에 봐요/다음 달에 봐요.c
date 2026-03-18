#include <stdio.h>

int main(void) {
    int q, t, v, cur = 0, ans = 1;
    scanf("%d", &q);
    while(q--) {
        scanf("%d %d", &t, &v);
        if(t == 1) cur += v;
        else {
            if(v > cur) {
                ans = 0;
                break;
            }
            cur -= v;
        }
    }
    printf(ans ? "See you next month" : "Adios");
    return 0;
}