#include <stdio.h>

int main() {
    int n, a[1000], i, j, temp, len=1, max_len=1, max_len_num;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0; i<n-1; i++) {
        if(len > max_len) max_len = len;
        if(a[i]==a[i+1]) len++;
        else len = 1;
    }
    if(len > max_len) max_len = len;
    printf("%d", max_len);
    return 0;
}