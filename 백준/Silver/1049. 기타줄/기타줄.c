#include <stdio.h>
#define MAX 1000

int main(void) {
    int n, m, six, one, min_six = MAX, min_one = MAX, price = 0;
    scanf("%d %d", &n, &m);
    while(m--) {
        scanf("%d %d", &six, &one);
        if(six < min_six) min_six = six;
        if(one < min_one) min_one = one;
    }
    if(min_six < min_one * (n < 6 ? n : 6)) {
        price = min_six * (n / 6);
        n %= 6;
        if(n) {
            if(min_six < min_one * n) price += min_six;
            else price += min_one * n;
        }
    } else price = min_one * n;
    printf("%d", price);
    return 0;
}