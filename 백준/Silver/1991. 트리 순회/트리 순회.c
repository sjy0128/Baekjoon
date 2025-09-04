#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char data;
    struct Node *left, *right;
} Node;

void preorder(Node *r), inorder(Node *r), postorder(Node *r);

int main(void) {
    int n;
    char a, b ,c;
    scanf("%d", &n);
    Node *nodes = (Node *)malloc(n*sizeof(Node));
    for(int i=0; i<n; i++) {
        scanf("\n%c %c %c", &a, &b, &c);
        nodes[a-'A'].data = a;
        nodes[a-'A'].left = b == '.' ? NULL : &nodes[b-'A'];
        nodes[a-'A'].right = c == '.' ? NULL : &nodes[c-'A'];
    }
    preorder(&nodes[0]);
    printf("\n");
    inorder(&nodes[0]);
    printf("\n");
    postorder(&nodes[0]);
    printf("\n");
    free(nodes);
    return 0;
}

void preorder(Node *r) {
    if(r == NULL) return;
    printf("%c", r->data);
    preorder(r->left);
    preorder(r->right);
}

void inorder(Node *r) {
    if(r == NULL) return;
    inorder(r->left);
    printf("%c", r->data);
    inorder(r->right);
}

void postorder(Node *r) {
    if(r == NULL) return;
    postorder(r->left);
    postorder(r->right);
    printf("%c", r->data);
}