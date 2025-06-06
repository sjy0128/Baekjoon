#include <stdio.h>

int main() {
    int n, i, d[50]={0,}, max=0, count=0;
    scanf("%d", &n);
    if(n == 1) {
        printf("0");
        return 0;
    }
    for(i=0; i<n; i++) {
        scanf("%d", &d[i]);
        if(d[i] > max) max = d[i];
    }
    while(d[0] <= max) {
        for(i=1; i<n; i++) {
            if(d[i] == max) {
                d[i]--;
                d[0]++;
                count++;
                if(d[0] > max) break;
            }
        }
        max--;
    }
    printf("%d", count);
    return 0;
}