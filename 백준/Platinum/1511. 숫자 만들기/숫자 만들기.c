#include <stdio.h>
#define MAX_LEN 50
#define REPF(i, n) for(int i = 0; i < (n); i++)
#define REPB(i, n) for(int i = (n) - 1; i >= 0; i--)

int main(void) {
    int cards[10], n = 0, prev = -1, next;
    int ans[MAX_LEN], ai = 0, pad = 0;
    
    REPF(i, 10) {
        scanf("%d", &cards[i]);
        n += cards[i];
    }
    
    if(n == cards[0]) {
        printf("0");
        return 0;
    }
    
    REPF(i, n+1) ans[i] = -1;
    
    while(n) {
        next = -1;
        
        REPB(i, 10) {
            if(i == prev) continue;
            
            if(next == -1 && cards[i]) next = i;
            
            if(cards[i] > n/2) {
                next = i;
                break;
            }
        }
        
        if(next == -1) break;
        
        cards[prev = ans[ai++] = next]--;
        n--;
    }
    
    pad = !ans[0];
    
    REPF(i, ai-pad) printf("%d", ans[i+pad]);
    
    return 0;
}