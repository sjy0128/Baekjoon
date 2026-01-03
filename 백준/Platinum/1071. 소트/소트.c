#include <stdio.h>
#define MAX_LEN 50
#define MAX_VAL 1001

int min(int *count, int k);
void insert(int *arr, int *count, int v, int n, int *_i, int *num_type);

void sort(int *a, int n);

int main(void) {
    int n, a[MAX_LEN];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    sort(a, n);
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}

int min(int *count, int k) {
    int c = 0;
    for(int i = 0; i < MAX_VAL; i++) {
        if(count[i]) {
            if(++c == k) return i;
        }
    }
    return -1;
}

void insert(int *arr, int *count, int v, int n, int *_i, int *num_type) {
    for(int i = 0; i < n; i++) arr[*_i + i] = v;
    count[v] -= n;
    *_i += n;
    if(!count[v]) *num_type -= 1;
}

void sort(int *a, int n) {
    int count[MAX_VAL] = {0,}, sort_i = 0, num_type = 0, latest = -1, temp;
    for(int i = 0; i < n; i++) {
        if(!count[a[i]]++) num_type++;
    }
    while(num_type) {
        if(num_type == 2 && min(count, 2) - min(count, 1) == 1) {
            for(int i = 2; i >= 1; i--) {
                temp = min(count, i);
                insert(a, count, temp, count[temp], &sort_i, &num_type);
            }
        } else {
            temp = min(count, 1);
            if(latest != -1 && temp == latest + 1) temp = min(count, 2);
            insert(a, count, temp, 1, &sort_i, &num_type);
            latest = temp;
        }
    }
}