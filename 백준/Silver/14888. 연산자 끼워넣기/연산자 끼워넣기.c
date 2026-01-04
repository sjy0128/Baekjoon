#include <stdio.h>
#define MAX 11
#define MAX_VAL 1000000000
#define MIN_VAL -1000000000

int n, a[MAX], oc, os[MAX], o[MAX], v[MAX], max = MIN_VAL, min = MAX_VAL;

void back_tracking(int oi);

int main(void) {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0, k = 0; i < 4; i++) {
        scanf("%d", &oc);
        for(int j = 0; j < oc; j++) os[k++] = i;
    }
    back_tracking(0);
    printf("%d\n%d", max, min);
    return 0;
}

void back_tracking(int oi) {
    int res;
    if(oi == n - 1) {
        res = a[0];
        for(int i = 1; i < n; i++) {
            switch(o[i - 1]) {
                case 0: res += a[i]; break;
                case 1: res -= a[i]; break;
                case 2: res *= a[i]; break;
                case 3: res /= a[i];
            }
        }
        if(res > max) max = res;
        if(res < min) min = res;
        return;
    }
    for(int i = 0; i < n - 1; i++) {
        if(v[i]) continue;
        v[i] = 1;
        o[oi] = os[i];
        back_tracking(oi + 1);
        v[i] = 0;
    }
}