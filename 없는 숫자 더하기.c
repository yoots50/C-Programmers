#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = -1, sum = 0, i;
    for (i = 0; i < numbers_len; i++) {
        sum += numbers[i];
    }
    answer = 45 - sum;
    return answer;
}