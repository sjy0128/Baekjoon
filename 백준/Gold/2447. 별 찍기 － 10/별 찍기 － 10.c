#include <stdio.h>

int main() {
    int n, i, j, k, s;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            s = 1;
            for(k=1; k<=i && k<=j; k*=3) {
                if(i%(k*3)>=k && i%(k*3)<k*2 && j%(k*3)>=k && j%(k*3)<k*2) {
                    s = 0;
                    break;
                }
            }
            printf(s ? "*" : " ");
        }
        printf("\n");
    }
    return 0;
}