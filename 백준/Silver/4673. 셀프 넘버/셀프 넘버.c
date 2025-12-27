#include <stdio.h>
#define MAX 10100

int d(int n);

int main(void) {
    int self_num[MAX];
    for(int i = 1; i <= 10000; i++) self_num[i] = 1;
    for(int i = 1; i <= 10000; i++) self_num[d(i)] = 0;
    for(int i = 1; i <= 10000; i++) {
        if(self_num[i]) printf("%d\n", i);
    }
    return 0;
}

int d(int n) {
    int sum = n;
    while(n) sum += n % 10, n /= 10;
    return sum;
}