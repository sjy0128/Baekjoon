#include <stdio.h>
#define MAX 400

int main(void) {
    int t, r, c, cnt;
    char box[MAX][MAX + 1];
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &r, &c);
        cnt = 0;
        for(int i = 0; i < r; i++) scanf("%s", box[i]);
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c-2; j++) {
                if(box[i][j] == '>' && box[i][j+1] == 'o' && box[i][j+2] == '<') cnt++;
            }
        }
        for(int i = 0; i < r-2; i++) {
            for(int j = 0; j < c; j++) {
                if(box[i][j] == 'v' && box[i+1][j] == 'o' && box[i+2][j] == '^') cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}