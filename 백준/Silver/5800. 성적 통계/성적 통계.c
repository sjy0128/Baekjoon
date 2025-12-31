#include <stdio.h>
#define MAX 50

int main(void) {
    int k, n, a[MAX], largest_gap;
    scanf("%d", &k);
    for(int i = 0; i < k; i++) {
        scanf("%d", &n);
        for(int j = 0; j < n; j++) scanf("%d", &a[j]);
        for(int j = 0; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                if(a[j] < a[k]) a[j] ^= a[k] ^= a[j] ^= a[k];
            }
        }
        largest_gap = 0;
        for(int j = 0; j < n - 1; j++) {
            if(a[j] - a[j + 1] > largest_gap) largest_gap = a[j] - a[j + 1];
        }
        printf("Class %d\nMax %d, Min %d, Largest gap %d\n", i + 1, a[0], a[n - 1], largest_gap);
    }
    return 0;
}