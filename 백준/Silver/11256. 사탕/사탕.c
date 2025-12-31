#include <stdio.h>
#define MAX 1000

int main(void) {
    int t, j, n, r, c, box_size[MAX];
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &j, &n);
        for(int i = 0; i < n; i++) {
            scanf("%d %d", &r, &c);
            box_size[i] = r * c;
        }
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(box_size[i] < box_size[j])
                    box_size[i] ^= box_size[j] ^= box_size[i] ^= box_size[j];
            }
        }
        for(int i = 0; i < n; i++) {
            if(j <= box_size[i]) {
                printf("%d\n", i + 1);
                break;
            }
            j -= box_size[i];
        }
    }
    return 0;
}