#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000

typedef struct Station {
    int num;
    struct Station *prev, *next;
} Station;

Station *st_p[MAX+1];

void construction(void);
void B(Station *a, Station *b, int n);
void C(Station *s);

int main(void) {
    int n, m, d;
    Station *s, *p=NULL, *a, *z;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++) {
        scanf("%d", &d);
        s = (Station *)malloc(sizeof(Station));
        s->num = d;
        if(i == 0) {
            a = s;
            s->prev = NULL;
        } else {
            p->next = s;
            s->prev = p;
        }
        st_p[d] = p = s;
        if(i == n-1) z = s;
    }
    a->prev = z;
    z->next = a;
    while(m--) construction();
    return 0;
}

void construction(void) {
    int i, j;
    char c[3];
    Station *s;
    scanf("%s %d", c, &i);
    s = c[1] == 'N' ? st_p[i]->next : st_p[i]->prev;
    printf("%d\n", s->num);
    if(c[0] == 'B') {
        scanf("%d", &j);
        B(c[1] == 'N' ? st_p[i] : s, c[1] == 'N' ? s : st_p[i], j);
    } else {
        C(s);
    }
}

void B(Station *a, Station *b, int n) {
    Station *s = (Station *)malloc(sizeof(Station));
    a->next = s;
    b->prev = s;
    s->num = n;
    s->prev = a;
    s->next = b;
    st_p[n] = s;
}

void C(Station *s) {
    s->prev->next = s->next;
    s->next->prev = s->prev;
    st_p[s->num] = NULL;
    free(s);
}