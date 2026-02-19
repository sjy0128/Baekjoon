#include <stdio.h>
#define MAX 1000

int main(void) {
    int n, b[MAX];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &b[i]);
    for(int i = 0, j = 0, k = 0; i < n; i++) {
        while(i && k) {
            if(k < 0 && b[j=(j?j:n)-1]) k++;
            if(k > 0 && b[j=(j+1)%n]) k--;
        }
        k = b[j], b[j] = 0;
        printf("%d ", j+1);
    }
    return 0;
}