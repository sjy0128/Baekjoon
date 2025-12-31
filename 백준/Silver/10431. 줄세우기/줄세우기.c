#include <stdio.h>

int main(void) {
    int p, t, c[20], cnt, tmp;
    scanf("%d", &p);
    while(p--) {
        scanf("%d", &t);
        for(int i = 0; i < 20; i++) scanf("%d", &c[i]);
        cnt = 0;
        for(int i = 1; i < 20; i++) {
            for(int j = 0; j < i; j++) {
                if(c[j] > c[i]) {
                    tmp = c[i];
                    for(int k = i; k > j; k--) {
                        c[k] = c[k - 1];
                        cnt++;
                    }
                    c[j] = tmp;
                    break;
                }
            }
        }
        printf("%d %d\n", t, cnt);
    }
    return 0;
}