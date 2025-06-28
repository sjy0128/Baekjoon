#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int t, i, j, k, a[10], max_idx;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        for(j=0; j<3; j++) {
            max_idx = 0;
            for(k=0; k<10-j; k++) {
                if(j == 0) scanf("%d", &a[k]);
                if(a[k] > a[max_idx]) max_idx = k;
            }
            swap(&a[max_idx], &a[10-j-1]);
        }
        printf("%d\n", a[7]);
    }
    return 0;
}