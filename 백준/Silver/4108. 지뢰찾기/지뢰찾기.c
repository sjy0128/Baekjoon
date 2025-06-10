#include <stdio.h>

int main() {
    int r, c, i, j, k, l, count;
    char m[102][102]={0,};
    while(1) {
        scanf("%d %d\n", &r, &c);
        if(r == 0 && c == 0) break;
        for(i=1; i<=r+1; i++) {
            for(j=1; j<=c+1; j++) {
                if(i == r+1 || j == c+1) m[i][j] = 0;
                else scanf("%c ", &m[i][j]);
            }
        }
        for(i=1; i<=r; i++) {
            for(j=1; j<=c; j++) {
                if(m[i][j] == '*') {
                    printf("*");
                    continue;
                }
                count = 0;
                for(k=-1; k<=1; k++) {
                    for(l=-1; l<=1; l++) {
                        if(m[i+k][j+l] == '*') count++;
                    }
                }
                printf("%d", count);
            }
            printf("\n");
        }
    }
    return 0;
}