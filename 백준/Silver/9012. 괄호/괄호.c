#include <stdio.h>

int main() {
    int t, i, j, count;
    char ps[51];
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%s", ps);
        count = 0;
        for(j=0; count >= 0 && ps[j]!='\0'; j++) {
            if(ps[j] == '(') count++;
            else count--;
        }
        printf("%s\n", count == 0 ? "YES" : "NO");
    }
    return 0;
}