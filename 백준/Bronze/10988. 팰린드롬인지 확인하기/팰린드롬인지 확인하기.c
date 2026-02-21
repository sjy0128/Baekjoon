#include <stdio.h>

int solve(const char *str, int idx, int len);

int main(void) {
    int len = 0;
    char str[101];
    scanf("%s", str);
    while(str[len]) len++;
    printf("%d", solve(str, 0, len));
    return 0;
}

int solve(const char *str, int idx, int len) {
    if(idx >= len / 2) return 1;
    return str[idx] == str[len-idx-1] ? solve(str, idx + 1, len) : 0;
}