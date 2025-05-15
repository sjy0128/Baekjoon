#include <stdio.h>

int main() {
    char t[8];
    scanf("%s", t);
    printf(t[0] == '5' && t[1] == '5' && t[2] == '5' ? "YES" : "NO");
    return 0;
}