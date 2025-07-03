#include <stdio.h>

int main(void) {
    int n, i, j, k, a[2000], temp, b1, b2, count=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0; i<n; i++) {
        b1 = 0;
        b2 = n-1;
        while(1) {
            if(b1 == i) b1++;
            if(b2 == i) b2--;
            if(b1 >= b2) break;
            if(a[b1] + a[b2] == a[i]) {
                count++;
                break;
            }
            if(a[b1] + a[b2] > a[i]) b2--;
            else b1++;
        }
    }
    printf("%d", count);
    return 0;
}