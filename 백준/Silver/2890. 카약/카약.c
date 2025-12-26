#include <stdio.h>
#define MAX 50

int main(void) {
    int r, c, rank[9] = {0,}, cur_rank = 1, temp;
    char k[MAX][MAX + 1];
    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++) scanf("%s", k[i]);
    for(int i = c - 2; i >= 2; i--) {
        temp = 0;
        for(int j = 0; j < r; j++) {
            if(k[j][i] != '.' && !rank[k[j][i]-'0'-1]) {
                rank[k[j][i]-'0'-1] = cur_rank;
                temp = 1;
            }
        }
        if(temp) cur_rank++;
    }
    for(int i = 0; i < 9; i++) printf("%d\n", rank[i]);
    return 0;
}