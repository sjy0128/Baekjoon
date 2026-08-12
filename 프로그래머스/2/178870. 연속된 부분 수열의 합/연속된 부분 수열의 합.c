#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sequence_len은 배열 sequence의 길이입니다.
int* solution(int sequence[], size_t sequence_len, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(2);
    int s = 0, e = 0, sum = sequence[0];
    int min_len = 1000000, ans_s;
    while(e < sequence_len) {
        if(sum == k && e - s + 1 < min_len) min_len = e - s + 1, ans_s = s;
        if(sum > k) sum -= sequence[s++];
        else sum += sequence[++e];
        if(s > e) sum += sequence[++e];
    }
    answer[0] = ans_s;
    answer[1] = ans_s + min_len - 1;
    return answer;
}