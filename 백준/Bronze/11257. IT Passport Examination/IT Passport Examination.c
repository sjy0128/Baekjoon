#include <stdio.h>

int main(void) {
    int n, num, s, m, t;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d %d %d %d", &num, &s, &m, &t);
        printf("%d %d ", num, s + m + t);
        if(s + m + t >= 55 && s*100 >= 35*30 && m*100 >= 25*30 && t*10 >= 40*3) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
    }
    return 0;
}