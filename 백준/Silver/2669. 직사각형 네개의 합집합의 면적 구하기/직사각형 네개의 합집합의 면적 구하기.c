#include <stdio.h>

int main() {
    int i, j, x1, y1, x2, y2, m[100][101]={0,}, sum=0;
    for(i=0; i<4; i++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for(j=y1; j<y2; j++) {
            m[j][x1]++;
            m[j][x2]--;
        }
    }
    for(i=0; i<100; i++) {
        for(j=1; j<100; j++) {
            m[i][j] += m[i][j-1];
            if(m[i][j] >= 1) sum++;
        }
    }
    printf("%d", sum);
    return 0;
}