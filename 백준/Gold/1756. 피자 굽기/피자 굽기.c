#include <stdio.h>
#define MAX 300000

int main(void) {
    int d, n, arr[MAX], ai, p;
    scanf("%d %d", &d, &n);
    for(int i = 0; i < d; i++) {
        scanf("%d", &arr[i]);
        if(i >= 1 && arr[i] > arr[i-1]) arr[i] = arr[i-1];
    }
    ai = d;
    while(n--) {
        scanf("%d", &p);
        ai--;
        while(ai >= 0 && arr[ai] < p) ai--;
        if(ai < 0) break;
    }
    printf("%d", ai + 1);
    return 0;
}