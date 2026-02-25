#include <stdio.h>
#include <stdlib.h>
#define MAX_CNT 20000
#define MAX_LEN 51
#define REP(i, s, e) for(int i = (s); i < (e); i++)

typedef char * word;

void _strcpy(const char *a, char **b);
int _strlen(const char *s);
int _strcmp(const char *a, const char *b);
int word_cmp(void *a, void *b);

void sort(void **arr, int n, int (*comp)(void *, void *));
void sort_sub(void **a, void **b, int s, int e, int (*comp)(void *, void *));

int distinct(void **a, int n, int (*comp)(void *, void *));

int main(void) {
    int n;
    char s[MAX_LEN];
    word w[MAX_CNT];
    scanf("%d", &n);
    REP(i, 0, n) {
        scanf("%s", s);
        _strcpy(s, &w[i]);
    }
    sort((void **)w, n, word_cmp);
    n = distinct((void **)w, n, word_cmp);
    REP(i, 0, n) {
        printf("%s\n", w[i]);
        free(w[i]);
    }
    return 0;
}

void _strcpy(const char *a, char **b) {
    int l = _strlen(a);
    *b = (char *)malloc(l + 1);
    for(int i = 0; i < l; i++) (*b)[i] = a[i];
    (*b)[l] = '\0';
}

int _strlen(const char *s) {
    int l = 0;
    while(s[l]) l++;
    return l;
}

int _strcmp(const char *a, const char *b) {
    int i = 0;
    while(a[i] && b[i] && a[i] == b[i]) i++;
    return a[i] - b[i];
}

int word_cmp(void *a, void *b) {
    char *ca = (char *)a, *cb = (char *)b;
    int la = _strlen(a), lb = _strlen(b);
    return la > lb ? 1 : (la < lb ? -1 : _strcmp(ca, cb));
}

void sort(void **arr, int n, int (*comp)(void *, void *)) {
    void *b = (void *)malloc(sizeof(void *) * n);
    sort_sub(arr, b, 0, n-1, comp);
    free(b);
}

void sort_sub(void **a, void **b, int s, int e, int (*comp)(void *, void *)) {
    if(s >= e) return;
    int m = (s+e)/2;
    int i = s, j = m+1, k = s;
    sort_sub(a, b, s, m, comp);
    sort_sub(a, b, m+1, e, comp);
    while(i <= m && j <= e) b[k++] = a[comp(a[i], a[j]) < 0 ? i++ : j++];
    while(i <= m) b[k++] = a[i++];
    while(j <= e) b[k++] = a[j++];
    REP(i, s, e+1) a[i] = b[i];
}

int distinct(void **a, int n, int (*comp)(void *, void *)) {
    int ai = 1;
    REP(i, 1, n) {
        if(comp(a[ai-1], a[i])) a[ai++] = a[i];
        else free(a[i]);
    }
    return ai;
}