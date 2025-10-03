#include <stdio.h>
#define MAX 1000000

int a[MAX], b[MAX], t[MAX], t2[MAX];

void sort(int *a, int *t, int *b, int *t2, int s, int e);
void f(int k, int i);

int main(void) {
    int n, temp, c=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        b[i] = i;
    }
    sort(a, t, b, t2, 0, n-1);
    temp = a[0];
    for(int i=0; i<n; i++) {
        if(a[i] != temp) temp = a[i], c++;
        a[i] = c;
    }
    sort(b, t2, a, t, 0, n-1);
    for(int i=0; i<n; i++) printf("%d ", a[i]);
    return 0;
}

void sort(int *a, int *t, int *b, int *t2, int s, int e) {
    if(s >= e) return;
    int m = (s+e)/2;
    int i=s, j=m+1, k=s;
    sort(a, t, b, t2, s, m);
    sort(a, t, b, t2, m+1, e);
    while(i <= m && j <= e) f(k++, a[i] < a[j] ? i++ : j++);
    while(i <= m) f(k++, i++);
    while(j <= e) f(k++, j++);
    for(i=s; i<=e; i++) a[i] = t[i], b[i] = t2[i];
}

void f(int k, int i) {
    t2[k] = b[i];
    t[k] = a[i];
}