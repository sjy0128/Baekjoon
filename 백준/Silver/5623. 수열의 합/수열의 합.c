#include <stdio.h>
#define MAX 1000

int main(void) {
    int n, s[MAX][MAX], ai;
    scanf("%d", &n);
    if(n == 2) {
        printf("1 1");
        return 0;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) scanf("%d", &s[i][j]);
    }
    for(int i = 0; i < n; i++) {
        ai = 0;
        switch(i) {
            case 0: ai = (s[0][1] + s[0][2] - s[1][2]) / 2; break;
            case 1: ai = (s[1][0] + s[1][2] - s[0][2]) / 2; break;
            default: ai = (s[i][0] + s[i][1] - s[0][1]) / 2;
        }
        printf("%d ", ai);
    }
    return 0;
}