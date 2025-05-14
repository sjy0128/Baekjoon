#include <stdio.h>

int main(void) {
    int N, m, M, T, R, i=0, j=0, x;
    scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);
    x = m;
    if(M-m < T) {
        printf("-1");
        return 0;
    }
    while(1) {
        if(x + T <= M) {
            x += T;
            i++;
        } else {
            if(x - R < m) {
                x = m;
            } else {
                x -= R;
            }
        }
        j++;
        if(i == N) break;
    }
    printf("%d", j);
    return 0;
}