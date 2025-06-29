#include <stdio.h>

int main() {
    int i, j, len, temp;
    char n[11];
    scanf("%s", n);
    for(len=0; n[len]!='\0'; len++);
    for(i=0; i<len-1; i++) {
        for(j=i+1; j<len; j++) {
            if(n[i] < n[j]) {
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    for(i=0; i<len; i++) {
        printf("%c", n[i]);
    }
    return 0;
}