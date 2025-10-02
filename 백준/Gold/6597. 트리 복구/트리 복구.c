#include <stdio.h>

char a[27], b[27];
int i;

int len(char *s);
void f();

int main(void) {
    while(scanf("%s %s", a, b) != EOF) {
        i=-1;
        f(0, len(a)-1);
        printf("\n");
    }
    return 0;
}

int len(char *s) {
    int l=0;
    while(s[l]!='\0') l++;
    return l;
}

void f(int x, int y) {
    int j=x;
    if(x > y) return;
    i++;
    while(b[j]!=a[i]) j++;
    f(x, j-1);
    f(j+1, y);
    printf("%c", b[j]);
}