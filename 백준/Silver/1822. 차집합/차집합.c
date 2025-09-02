#include <stdio.h>

void sort(int *a, int *t, int s, int e);

int main(void) {
    int na, nb, a[500000], b[500000], t[500000], c=0, s, e, p, l;
    scanf("%d %d", &na, &nb);
    for(int i=0; i<na; i++) scanf("%d", &a[i]);
    for(int i=0; i<nb; i++) scanf("%d", &b[i]);
    sort(a, t, 0, na-1);
    sort(b, t, 0, nb-1);
    for(int i=0; i<na; i++) {
        s = 0;
        e = nb-1;
        l = 0;
        while(s <= e) {
            p = (s+e)/2;
            if(a[i] == b[p]) {
                l = 1;
                break;
            }
            if(a[i] >= b[p]) s = p+1;
            else e = p-1;
        }
        if(!l) t[c++] = a[i];
    }
    printf("%d\n", c);
    for(int i=0; i<c; i++) printf("%d ", t[i]);
    return 0;
}

void sort(int *a, int *t, int s, int e) {
    if(s >= e) return;
    int m = (s+e)/2;
    int i=s, j=m+1, k=s;
    sort(a, t, s, m);
    sort(a, t, m+1, e);
    while(i <= m && j <= e) {
        if(a[i] < a[j]) t[k++] = a[i++];
        else t[k++] = a[j++];
    }
    while(i <= m) t[k++] = a[i++];
    while(j <= e) t[k++] = a[j++];
    for(i=s; i<=e; i++) a[i] = t[i];
}