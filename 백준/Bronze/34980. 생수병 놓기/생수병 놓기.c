#include <stdio.h>
#define MAX 151

int main(void) {
    int n, equal = 1, cnt_m = 0, cnt_e = 0;
    char m[MAX], e[MAX];
    scanf("%d\n%s\n%s", &n, m, e);
    for(int i = 0; i < n; i++) {
        if(m[i] != e[i]) equal = 0;
        cnt_m += m[i] - '0';
        cnt_e += e[i] - '0';
    }
    if(equal) printf("Good");
    else if(cnt_m == cnt_e) printf("Its fine");
    else printf(cnt_m > cnt_e ? "Oryang" : "Manners maketh man");
    return 0;
}