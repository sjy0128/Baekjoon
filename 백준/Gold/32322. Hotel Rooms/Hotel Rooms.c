#include <stdio.h>
#define MAX 2000001

int tree[MAX], size = 1;

void update(int i);
int query(int s, int e);

int main(void) {
    int n, t, a, b;
    char c;
    scanf("%d %d", &n, &t);
    while(size < n) size <<= 1;
    while(t--) {
        scanf(" %c", &c);
        if(c == 'R') {
            scanf("%d", &a);
            update(a);
        } else {
            scanf("%d %d", &a, &b);
            printf("%d\n", query(a, b));
        }
    }
    return 0;
}

void update(int i) {
    i += size - 1;
    tree[i] = 1;
    for(i /= 2; i; i /= 2) tree[i] = tree[i*2] + tree[i*2+1];
}

int query(int s, int e) {
    int r = e - s + 1;
    s += size - 1;
    e += size - 1;
    while(s <= e) {
        if(s % 2) r -= tree[s++];
        if(!(e % 2)) r -= tree[e--];
        s /= 2, e /= 2;
    }
    return r;
}