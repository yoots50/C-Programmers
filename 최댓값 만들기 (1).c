#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int max1 = 0, max2 = 0;
    for (int i = 0; i < numbers_len; i++) {
        if (max2 > max1 && max1 < numbers[i]) {
            max1 = numbers[i];
        } else if (numbers[i] > max2) {
            max2 = numbers[i];
        }
    }
    return max1 * max2;
}