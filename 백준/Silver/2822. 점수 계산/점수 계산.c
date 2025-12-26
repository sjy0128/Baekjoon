#include <stdio.h>

typedef struct {
    int num, score;
} Quiz;

void swap(Quiz *a, Quiz *b);

int main(void) {
    int sum = 0, ta[8] = {0, };
    Quiz q[8];
    for(int i = 0; i < 8; i++) {
        scanf("%d", &q[i].score);
        q[i].num = i + 1;
    }
    for(int i = 0; i < 7; i++) {
        for(int j = i+1; j < 8; j++) {
            if(q[i].score < q[j].score) swap(&q[i], &q[j]);
        }
    }
    for(int i = 0; i < 5; i++) {
        sum += q[i].score;
        ta[q[i].num - 1] = 1;
    }
    printf("%d\n", sum);
    for(int i = 0; i < 8; i++) {
        if(ta[i]) printf("%d ", i+1);
    }
    return 0;
}

void swap(Quiz *a, Quiz *b) {
    Quiz t = *a;
    *a = *b;
    *b = t;
}