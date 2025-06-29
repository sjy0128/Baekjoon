#include <stdio.h>

int main(void) {
    int n, i, d, m, y, age[100], max_idx=0, min_idx=0;
    char name[100][16];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s %d %d %d", name[i], &d, &m, &y);
        age[i] = y*366 + m*31 + d;
        if(age[i] > age[max_idx]) max_idx = i;
        if(age[i] < age[min_idx]) min_idx = i;
    }
    printf("%s\n%s", name[max_idx], name[min_idx]);
    return 0;
}