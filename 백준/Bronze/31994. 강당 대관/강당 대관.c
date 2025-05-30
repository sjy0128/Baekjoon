#include <stdio.h>

int main(void) {
    int i, pro[7], max_idx=0;
    char semi[7][23];
    for(i=0; i<7; i++) {
        scanf("%s %d", semi[i], &pro[i]);
        if(pro[i] > pro[max_idx]) max_idx = i;
    }
    printf("%s", semi[max_idx]);
    return 0;
}