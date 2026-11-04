#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int i = n; i >= 1; i -= 2) answer += i % 2 ? i : i*i;
    return answer;
}