#include <stdio.h>
int main(void) {
    int i, j=0, k=0, w_len, count=0;
    char d[2502], w[51];
    fgets(d, 2502, stdin);
    fgets(w, 51, stdin);
    for(w_len=0; w[w_len]!='\0'; w_len++);
    if(w[w_len-1]=='\n') {
        w[w_len-1] = '\0';
        w_len--;
    }
    for(i=0; d[i]!='\0'; i++) {
        if(d[i] == w[j]) {
            if(++j == w_len) {
                count++;
                j=0;
                k=i;
            }
        } else {
            i=k++;
            j=0;
        }
    }
    printf("%d", count);
    return 0;
}