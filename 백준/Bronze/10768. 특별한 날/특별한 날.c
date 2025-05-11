#include <stdio.h>

int main(void) {
    int m, d;
    scanf("%d\n%d", &m, &d);
    printf("%s", m==2 && d==18 ? "Special" : (m<2 || (m==2 && d<18) ? "Before" : "After"));
    return 0;
}