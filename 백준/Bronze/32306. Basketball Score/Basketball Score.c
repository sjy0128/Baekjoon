#include <stdio.h>

int main(void) {
    int score, i, t1=0, t2=0;
    for(i=1; i<=3; i++) {
        scanf("%d", &score);
        t1 += score*i;
    }
    for(i=1; i<=3; i++) {
        scanf("%d", &score);
        t2 += score*i;
    }
    printf(t1 == t2 ? "0" : (t1 > t2 ? "1" : "2"));
    return 0;
}