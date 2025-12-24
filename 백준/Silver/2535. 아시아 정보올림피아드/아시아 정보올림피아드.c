#include <stdio.h>
#define MAX 100

typedef struct {
    int cn, sn, score;
} Student;

void swap(Student *a, Student *b);

int main(void) {
    int n, cnt[MAX] = {0,}, k = 3;
    Student s[MAX];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %d %d", &s[i].cn, &s[i].sn, &s[i].score);
    }
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(s[i].score < s[j].score) swap(&s[i], &s[j]);
        }
    }
    for(int i = 0; i < n && k; i++) {
        while(cnt[s[i].cn - 1] == 2) i++;
        printf("%d %d\n", s[i].cn, s[i].sn);
        cnt[s[i].cn - 1]++;
        k--;
    }
    return 0;
}

void swap(Student *a, Student *b) {
    Student t = *a;
    *a = *b;
    *b = t;
}