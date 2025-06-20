#include <stdio.h>

int main() {
    int n, i, j, temp, num[10000]={0,};
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &temp);
        num[temp-1]++;
    }
    for(i=0; i<10000; i++) {
        for(j=0; j<num[i]; j++) {
            printf("%d\n", i+1);
        }
    }
    return 0;
}