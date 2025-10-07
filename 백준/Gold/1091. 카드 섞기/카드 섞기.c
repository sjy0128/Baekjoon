#include <stdio.h>
#define MAX 200000

int n, c[48], p[48], t[48];

int equal(void);

int main(void) {
    int s[48], r=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &p[i]);
        c[i] = i%3;
    }
    for(int i=0; i<n; i++) scanf("%d", &s[i]);
    while(!equal()) {
        if(r >= MAX) {
            printf("-1");
            return 0;
        }
        for(int i=0; i<n; i++) t[i] = c[s[i]];
        for(int i=0; i<n; i++) c[i] = t[i];
        r++;
    }
    printf("%d", r);
    return 0;
}

int equal(void) {
    for(int i=0; i<n; i++) {
        if(c[i] != p[i]) return 0;
    }
    return 1;
}