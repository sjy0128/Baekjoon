#include <stdio.h>
#define MAX 101

int main(void) {
    int w, h, n, a, b, cut_w[MAX] = {0,}, cut_h[MAX] = {0,}, cnt, max_w = 0, max_h = 0;
    scanf("%d %d\n%d", &w, &h, &n);
    cut_w[w] = cut_h[h] = 1;
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        if(a) cut_w[b] = 1;
        else cut_h[b] = 1;
    }
    for(int i = cnt = 0; i < w+1; i++) {
        if(!cut_w[i]) cnt++;
        else {
            if(cnt > max_w) max_w = cnt;
            cnt = 1;
        }
    }
    for(int i = cnt = 0; i < h+1; i++) {
        if(!cut_h[i]) cnt++;
        else {
            if(cnt > max_h) max_h = cnt;
            cnt = 1;
        }
    }
    printf("%d", max_w * max_h);
    return 0;
}