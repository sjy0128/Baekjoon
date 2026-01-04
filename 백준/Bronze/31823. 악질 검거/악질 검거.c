#include <stdio.h>
#define MAX 201

int main(void) {
    int n, m, rst, max_rst[MAX] = {0,}, max_rst_cnt[MAX] = {0,}, cnt = 0;
    char name[MAX][11], st;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) {
        rst = 0;
        for(int j = 0; j < m; j++) {
            scanf(" %c", &st);
            if(st == '*') rst = 0;
            else if(++rst > max_rst[i]) max_rst[i] = rst;
        }
        if(!max_rst_cnt[max_rst[i]]++) cnt++;
        scanf("%s", name[i]);
    }
    printf("%d\n", cnt);
    for(int i = 0; i < n; i++) printf("%d %s\n", max_rst[i], name[i]);
    return 0;
}