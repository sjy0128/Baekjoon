#include <stdio.h>

int main(void) {
    int n, k, c[9]={0,}, i, j, max_idx=0;
    char cn[9][9] = {"PROBRAIN", "GROW", "ARGOS", "ADMIN", "ANT", "MOTION", "SPG", "COMON", "ALMIGHTY"};
    scanf("%d", &n);
    for(i=0; i<9; i++) {\
        for(j=0; j<n; j++) {
            scanf("%d", &k);
            if(k > c[i]) c[i] = k;
        }
        if(c[i] > c[max_idx]) max_idx = i;
    }
    printf("%s", cn[max_idx]);
    return 0;
}