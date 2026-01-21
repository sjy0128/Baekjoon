#include <stdio.h>

int main(void) {
    int n, tl[10], th[10], h;
    char s1[6], s2[5];
    do {
        for(int i = 0; i < 10; i++) tl[i] = th[i] = 0;
        while(1) {
            scanf("%d\n%s %s", &n, s1, s2);
            if(!n) break;
            if(s1[0] == 'r') {
                h = 1;
                for(int i = n-1, j = n-1; i >= 0 || j < 10; i--, j++) {
                    if(i >= 0 && th[i] || j < 10 && tl[j]) {
                        h = 0;
                        break;
                    }
                }
                printf(h ? "Stan may be honest\n" : "Stan is dishonest\n");
                break;
            } else {
                if(s2[0] == 'l') tl[n-1]++;
                else th[n-1]++;
            }
        }
    } while(n);
    return 0;
}