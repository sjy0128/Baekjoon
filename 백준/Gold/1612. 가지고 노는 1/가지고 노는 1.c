#include <stdio.h>
#include <stdbool.h>
#define MAX 1000000

int main(void) {
    int n, x = 0, ans = 0;
    bool visited[MAX] = {0,};
    scanf("%d", &n);
    while(1) {
        x = (x * 10 + 1) % n;
        if(visited[x]) {
            ans = -1;
            break;
        }
        visited[x] = 1;
        ans++;
        if(!x) break;
    }
    printf("%d", ans);
    return 0;
}