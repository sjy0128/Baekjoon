#include <stdio.h>
#define MAX_NUM 100000
#define MAX_PRICE 10000

int main(void) {
    int u, n, price[MAX_NUM], count[MAX_PRICE] = {0,}, min_count = MAX_NUM, min_price, min_idx = MAX_NUM;
    char name[MAX_NUM][11];
    scanf("%d %d", &u, &n);
    for(int i = 0; i < n; i++) {
        scanf("%s %d", name[i], &price[i]);
        count[price[i] - 1]++;
    }
    for(int i = 0; i < u; i++) {
        if(count[i] && count[i] < min_count) {
            min_count = count[i];
            min_price = i + 1;
        }
    }
    for(int i = 0; i < n; i++) {
        if(price[i] == min_price) {
            printf("%s %d", name[i], price[i]);
            break;
        }
    }
    return 0;
}