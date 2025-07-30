#include <stdio.h>

int main(void) {
    int n, i, j=2, a[11]={0,};
    char b[11] = {'r', 'a', 'b', 'b', 'i', 't', 'h', 'o', 'r', 's', 'e'};
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        a[j++]++;
        if(j >= 11) j = 0;
    }
    for(i=0; i<11; i++) {
        for(j=0; j<a[i]; j++) printf("%c", b[i]);
    }
    return 0;
}