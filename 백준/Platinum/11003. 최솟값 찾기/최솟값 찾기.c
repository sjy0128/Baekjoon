#include <stdio.h>
#define MAX 5000000

struct {
    int f, r;
    int e[MAX];
} dq;

int a[MAX];
int l, n;

int main(void) {
    dq.f = 0, dq.r = -1;
    scanf("%d %d", &l, &n);
    for(int i=0; i<l; i++) {
        scanf("%d", &a[i]);
        while(dq.f <= dq.r && dq.e[dq.f] <= i - n) dq.f++;
        while(dq.f <= dq.r && a[dq.e[dq.r]] >= a[i]) dq.r--;
        dq.e[++dq.r] = i;
        printf("%d ", a[dq.e[dq.f]]);
    }
    return 0;
}