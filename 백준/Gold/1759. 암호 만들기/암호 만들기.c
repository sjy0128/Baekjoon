#include <stdio.h>

int l, c, v[15], x, y;
char a[15], p[15];

void f(int d);
int f2(char c);

int main(void) {
    scanf("%d %d\n", &l, &c);
    for(int i=0; i<c; i++) scanf("%c ", &a[i]);
    for(int i=0; i<c-1; i++) {
        for(int j=i+1; j<c; j++) {
            if(a[i] > a[j]) a[i] ^= a[j] ^= a[i] ^= a[j];
        }
    }
    f(0);
    return 0;
}

void f(int d) {
    if(d == l) {
        printf("%s\n", p);
        return;
    }
    for(int i=0; i<c; i++) {
        int t = f2(a[i]);
        if(!v[i] && (!d || p[d-1] < a[i]) && (t ? l-d > 2-x : l-d > 1-y)) {
            v[i] = 1;
            p[d] = a[i];
            if(t) y++;
            else x++;
            f(d+1);
            v[i] = 0;
            if(t) y--;
            else x--;
        }
    }
}

int f2(char c) {
    char aeiou[] = "aeiou";
    for(int i=0; i<5; i++) {
        if(c == aeiou[i]) return 1;
    }
    return 0;
}