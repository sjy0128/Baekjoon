#include <stdio.h>
#define MAX 51

int main(void) {
    int n, m, book[MAX], weight = 0, cnt = 0;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) {
        scanf("%d", &book[i]);
        if(weight + book[i] > m) weight = 0;
        if(!weight) cnt++;
        weight += book[i];
    }
    printf("%d", cnt);
    return 0;
}