#include <stdio.h>

int main(void) {
    int i = 0, c = 0, f = 0;
    char b[51];
    scanf("%s", b);
    do {
        if(b[i] == 'X') {
            c++;
            if(c == 4) {
                c = 0;
                for(int j=i; j>i-4; j--) b[j] = 'A';
            }
        } else {
            if(c % 2) {
                f = 1;
                break;
            } else if(c == 2) {
                b[i-2] = b[i-1] = 'B';
                c = 0;
            }
        }
    } while(b[i++] != '\0');
    if(f) printf("-1");
    else printf("%s", b);
    return 0;
}