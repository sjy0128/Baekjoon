#include <stdio.h>

int main(void) {
    int n, m, cnt, digit[10], is_lucky;
    while(scanf("%d %d", &n, &m) != EOF) {
        cnt = 0;
        for(int i = n; i <= m; i++) {
            is_lucky = 1;
            for(int j = 0; j < 10; j++) digit[j] = 0;
            for(int j = i; j; j /= 10) {
                if(digit[j % 10]) {
                    is_lucky = 0;
                    break;
                }
                digit[j % 10] = 1;
            }
            if(is_lucky) cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}