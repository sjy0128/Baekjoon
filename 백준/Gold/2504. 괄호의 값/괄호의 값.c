#include <stdio.h>
#define MAX 31

struct { int t; char d[MAX]; } s = {-1};
struct { int t; int d[MAX]; } s2 = {-1};

int main(void) {
    int sum = 0, l;
    char p[MAX], t;
    scanf("%s", p);
    for(int c = 0; p[c]; c++) {
        if(p[c] == '(' || p[c] == '[') {
            s.d[++s.t] = p[c];
            s2.d[++s2.t] = 0;
        } else if(p[c] == ')' || p[c] == ']') {
            t = (s.t == -1 ? '\0' : s.d[s.t--]);
            if(!t || (p[c] == ')' && t != '(') || (p[c] == ']' && t != '[')) {
                printf("0");
                return 0;
            }
            l = 0;
            while(s2.t > 0 && s2.d[s2.t]) l += s2.d[s2.t--];
            s2.d[s2.t] = (l ? l : 1) * (2 + (t == '['));
        }
    }
    if(s.t != -1) {
        printf("0");
        return 0;
    }
    for(int i = 0; i <= s2.t; i++) {
        if(s2.d[i] != 1) sum += s2.d[i];
    }
    printf("%d", sum);
    return 0;
}