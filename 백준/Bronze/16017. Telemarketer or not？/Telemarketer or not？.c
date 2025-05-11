#include <stdio.h>

int main(void) {
    int a[4];
    for(int i=0; i<4; i++) scanf("%d", &a[i]);
    printf("%s", a[0] >= 8 && a[3] >= 8 && a[1] == a[2] ? "ignore" : "answer");
}