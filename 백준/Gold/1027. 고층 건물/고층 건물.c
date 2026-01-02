#include <stdio.h>
#define MAX 50

int n, a[MAX];

int abs(int a) { return a > 0 ? a : -a; }
int min(int a, int b) { return a < b ? a : b; }
int f(int _i);

int main(void) {
    int fi, max = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n; i++) {
        fi = f(i);
        if(f(i) > max) max = f(i);
    }
    printf("%d", max);
    return 0;
}

int f(int _i) {
    int cnt = 0, i_diff, h_diff, visible;
    for(int i = 0; i < n; i++) {
        if(i == _i) continue;
        i_diff = abs(i - _i);
        h_diff = a[i] - a[_i];
        if(i < _i) h_diff = -h_diff;
        visible = 1;
        for(int j = 1; j < i_diff; j++) {
            if(a[min(i, _i) + j] >= a[min(i, _i)] + (double)h_diff * j / i_diff) {
                visible = 0;
                break;
            }
        }
        if(visible) cnt++;
    }
    return cnt;
}