#include <stdio.h>

int main(void) {
    int n, p[50], ch[50]={0,}, d, t, l=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &p[i]);
        if(p[i] != -1) ch[p[i]]++;
    }
    scanf("%d", &d);
    ch[p[d]]--;
    for(int i=0; i<n; i++) {
        if(!ch[i]) {
            t = i;
            while(1) {
                if(t == -1) {
                    l++;
                    break;
                }
                if(t == d) break;
                t = p[t];
            }
        }
    }
    printf("%d", l);
    return 0;
}