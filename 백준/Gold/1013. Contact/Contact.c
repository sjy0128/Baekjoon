#include <stdio.h>
#define MAX 201

int main(void) {
    int t, n, c0, c1, yn;
    char spr[MAX];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", spr);
        for(n = 0; spr[n] != '\0'; n++);
        c0 = c1 = 0;
        yn = 1;
        while(--n >= 0) {
            yn = 0;
            if(spr[n] == '0') c0++;
            if(spr[n] == '1') {
                if(c0) {
                    if(c0 >= 2 && c1 >= 1) {
                        yn = 1;
                        c0 = c1 = 0;
                    } else if(c0 == 1 && c1 == 1) {
                        yn = 1;
                        c0 = c1 = 0;
                        n++;
                    } else {
                        yn = 0;
                        break;
                    }
                } else c1++;
            }
        }
        if(c0 >= 2 && c1 >= 1 && spr[0] == '1' || c0 == 1 && c1 == 1) yn = 1;
        printf(yn ? "YES\n" : "NO\n");
    }
    return 0;
}