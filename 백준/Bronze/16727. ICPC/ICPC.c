#include <stdio.h>

int main() {
    int p1, s1, s2, p2;
    scanf("%d %d\n%d %d", &p1, &s1, &s2, &p2);
    if(p1 + p2 == s1 + s2) {
        if(p2 == s1) printf("Penalty");
        else if(p2 > s1) printf("Persepolis");
        else printf("Esteghlal");
    } else if(p1 + p2 > s1 + s2) printf("Persepolis");
    else printf("Esteghlal");
    return 0;
}