#include <stdio.h>

int main() {
    int n;
    char s[100001];
    scanf("%d\n%s", &n, s);
    for(int i=n-5; i<n; i++) printf("%c", s[i]);
    return 0;
}