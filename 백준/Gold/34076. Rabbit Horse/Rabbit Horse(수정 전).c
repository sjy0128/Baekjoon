#include <stdio.h>

int main(void) {
    int n, i, j, a[10]={1, 1, 2, 1, 1, 1, 1, 1, 1, 1};
    char b[10] = {'r', 'a', 'b', 'i', 't', 'h', 'o', 'r', 's', 'e'};
    scanf("%d", &n);
    if(n < 11) {
        for(i=0; i<n; i++) printf("a");
    } else {
        j = 2;
        for(i=0; i<n-11; i++) {
            a[j]++;
            if(j == 2 && i != n-12) {
                a[j]++;
                i++;
            }
            if(++j >= 10) j = 0;
        }
        for(i=0; i<10; i++) {
            for(j=0; j<a[i]; j++) printf("%c", b[i]);
        }
    }
    return 0;
}
