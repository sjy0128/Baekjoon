#include <stdio.h>

int main() {
    int h, w, i, j, b[500], p, sum=0;
    scanf("%d %d", &h, &w);
    for(i=0; i<w; i++) {
        scanf("%d", &b[i]);
    }
    i = 0;
    while(i < w) {
        p = i+1;
        for(j=i+1; j<w; j++) {
            if(b[j] > b[i]) {
                p = j;
                break;
            }
            if(b[j] > b[p]) p = j;
        }
        if(p == i) break;
        for(j=i+1; j<p; j++) {
            sum += (b[i] < b[p] ? b[i] : b[p]) - b[j];
        }
        i = p;
    }
    printf("%d", sum);
    return 0;
}