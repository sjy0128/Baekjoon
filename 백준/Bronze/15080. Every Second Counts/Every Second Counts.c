#include <stdio.h>

int main(void) {
    int sh, sm, ss, ssc, eh, em, es, esc, sc;
    scanf("%d : %d : %d\n%d : %d : %d", &sh, &sm, &ss, &eh, &em, &es);
    ssc = sh * 3600 + sm * 60 + ss;
    esc = eh * 3600 + em * 60 + es;
    sc = esc - ssc;
    if(ssc > esc) sc += 3600 * 24;
    
    printf("%d", sc);
    return 0;
}