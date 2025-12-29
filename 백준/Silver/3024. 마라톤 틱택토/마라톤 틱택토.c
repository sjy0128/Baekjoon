#include <stdio.h>
#define MAX 31

int checkIndex(int n, int x, int y);

int main(void) {
    int n, dx[] = {-1, 0, 1, 1}, dy[] = {1, 1, 1, 0}, win;
    char b[MAX][MAX], cur;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%s", b[i]);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(b[i][j] == '.') continue;
            for(int d = 0; d < 4; d++) {
                cur = b[i][j];
                win = 1;
                for(int l = 1; l < 3; l++) {
                    if(!checkIndex(n, i, j) || b[i + l * dx[d]][j + l * dy[d]] != cur) {
                        win = 0;
                        break;
                    }
                }
                if(win) {
                    printf("%c", cur);
                    return 0;
                }
            }
        }
    }
    printf("ongoing");
    return 0;
}

int checkIndex(int n, int x, int y) {
    return x >= 0 && y >= 0 && x < n && y < n;
}