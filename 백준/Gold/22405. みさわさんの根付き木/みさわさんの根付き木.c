#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left, *right;
} Node;

Node *a_root, *b_root, *c_root;
int p;

int read_int(char str[]);
Node *make_tree(char str[]);
void preorder(Node *a, Node *b);

void free_tree(Node *a);

int main(void) {
    char a[1001], b[1001];
    scanf("%s\n%s", a, b);
    a_root = make_tree(a);
    p = 0;
    b_root = make_tree(b);
    preorder(a_root, b_root);
    free_tree(a_root);
    free_tree(b_root);
    return 0;
}

int read_int(char str[]) {
    int n=0;
    while(str[p]>='0' && str[p]<='9') n = n*10 + str[p++]-'0';
    return n;
}

Node *make_tree(char str[]) {
    if (str[p]==')') return NULL;
    Node *n = (Node *)malloc(sizeof(Node));
    p++;
    n->left = make_tree(str);
    p+=2;
    n->data = read_int(str);
    p+=2;
    n->right = make_tree(str);
    p++;
    return n;
}

void preorder(Node *a, Node *b) {
    printf("(");
    if(a->left != NULL && b->left != NULL) preorder(a->left, b->left);
    printf(")[%d](", a->data + b->data);
    if(a->right != NULL && b->right != NULL) preorder(a->right, b->right);
    printf(")");
}

void free_tree(Node *a) {
    if(a->left != NULL) free_tree(a->left);
    if(a->right != NULL) free_tree(a->right);
    free(a);
}