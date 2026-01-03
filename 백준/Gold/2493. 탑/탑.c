#include <stdio.h>
#define MAX 500000

struct {
    int top;
    struct Tower {
        int num, height;
    } d[MAX];
} s = {-1};

int main(void) {
    int n, h;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &h);
        if(s.top == -1 || s.d[0].height < h) {
            printf("0 ");
            s.top = -1;
        } else {
            while(s.top >= 0 && s.d[s.top].height < h) s.top--;
            printf("%d ", s.d[s.top].num);
        }
        s.d[++s.top] = (struct Tower){i + 1, h};
    }
    return 0;
}