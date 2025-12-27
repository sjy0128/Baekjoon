#include <stdio.h>
#define MAX 101

int main(void) {
    int n, m, r, a[MAX] = {0,}, b[MAX] = {0,};
    scanf("%d %d", &n, &m);
    for(int i = 1, j; i <= n; i++) {
        j = i;
        scanf("%d", &r);
        while(j != r) a[j] = a[j - 1], j--;
        a[j] = i;
    }
    for(int i = m; i >= 1; i--) {
        int j = m - i + 1;
        scanf("%d", &r);
        while(j != r) b[j] = b[j - 1], j--;
        b[j] = a[i];
    }
    for(int i = 1; i <= 3; i++) printf("%d\n", b[i]);
    return 0;
}