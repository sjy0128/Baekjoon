#include <stdio.h>
#define MAX 10001

int main(void) {
    int t, s;
    char r[MAX];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", r);
        for(s = 1; r[s * s]; s++);
        for(int i = s - 1; i >= 0; i--) {
            for(int j = 0; j < s; j++) printf("%c", r[j * s + i]);
        }
        printf("\n");
    }
    return 0;
}