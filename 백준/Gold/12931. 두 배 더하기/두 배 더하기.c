#include <stdio.h>
#define MAX 50

int main(void) {
    int n, b[MAX], running, all_even, cnt = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &b[i]);
    while(1) {
        running = 0, all_even = 1;
        for(int i = 0; i < n; i++) {
            if(b[i]) running = 1;
            if(b[i] % 2) {
                b[i]--;
                cnt++;
                all_even = 0;
            }
        }
        if(!running) break;
        if(all_even) {
            for(int i = 0; i < n; i++) b[i] /= 2;
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}