#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 500

typedef char Bool;

typedef struct Node {
    Bool is_end;
    struct Node *link[26];
} Node;

Node *create_node(void);
void add(Node *set, const char *s);
int in(Node *set, const char *s);
void free_set(Node *set);

int main(void) {
    int n, m, e, ans = 0;
    char s[MAX_LEN + 1];
    Node *set = create_node();
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) {
        scanf("%s", s);
        add(set, s);
    }
    for(int i = 0; i < m; i++) {
        scanf("%s", s);
        if(in(set, s)) ans++;
    }
    free_set(set);
    printf("%d", ans);
    return 0;
}

Node *create_node(void) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->is_end = 0;
    for(int i = 0; i < 26; i++) n->link[i] = 0;
    return n;
}

void add(Node *set, const char *s) {
    Node *cur = set;
    for(int j = 0; s[j]; j++) {
        if(!cur->link[s[j]-'a']) cur->link[s[j]-'a'] = create_node();
        cur = cur->link[s[j]-'a'];
    }
    cur->is_end = 1;
}

int in(Node *set, const char *s) {
    Node *cur = set;
    for(int j = 0; s[j]; j++) {
        if(!cur->link[s[j]-'a']) return 0;
        cur = cur->link[s[j]-'a'];
    }
    return cur->is_end;
}

void free_set(Node *set) {
    Node *st[MAX_LEN * 26], *cur;
    int top = -1;
    st[++top] = set;
    while(top >= 0) {
        cur = st[top--];
        for(int i = 0; i < 26; i++) {
            if(cur->link[i]) st[++top] = cur->link[i];
        }
        free(cur);
    }
}