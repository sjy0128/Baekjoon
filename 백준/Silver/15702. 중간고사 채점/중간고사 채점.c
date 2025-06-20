#include <stdio.h>

int main() {
    int n, m, i, j, s, pa[100], tn, sum, max=0, max_tn=100000;
    char ox;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++) {
        scanf("%d", &pa[i]);
    }
    for(i=0; i<m; i++) {
        scanf("%d ", &tn);
        sum = 0;
        for(j=0; j<n; j++) {
            scanf("%c ", &ox);
            if(ox == 'O') sum += pa[j];
        }
        if(sum > max || (sum == max && tn < max_tn)) {
            max = sum;
            max_tn = tn;
        }
    }
    printf("%d %d", max_tn, max);
    return 0;
}