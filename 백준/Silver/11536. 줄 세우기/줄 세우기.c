#include <stdio.h>

int _strcmp(const char *a, const char *b);

int main(void) {
    int n, id;
    char name[20][13];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%s", name[i]);
        if(i == 1) id = _strcmp(name[i], name[i - 1]);
        if(i >= 2 && id != _strcmp(name[i], name[i - 1])) {
            id = 0;
            break;
        }
    }
    switch(id) {
        case 1: printf("INCREASING"); break;
        case -1: printf("DECREASING"); break;
        default: printf("NEITHER");
    }
    return 0;
}

int _strcmp(const char *a, const char *b) {
    int i;
    for(i = 0; a[i] && b[i]; i++) {
        if(a[i] != b[i]) return a[i] > b[i] ? 1 : -1;
    }
    return a[i] ? 1 : -1;
}