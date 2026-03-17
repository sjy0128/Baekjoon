#include <stdio.h>

int main(void) {
    int ans = 0;
    char line[102];
    while(fgets(line, 102, stdin)) ans++;
    printf("%d", ans);
    return 0;
}