#include <stdio.h>
int main(void) {
    int n, count=0;
    char s[51];
    scanf("%d%s", &n, &s);
    for(int i=0; i<n; i++) {
        switch(s[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
        }
    }
    printf("%d", count);
}