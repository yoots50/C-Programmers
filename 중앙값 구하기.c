#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int cnt1 = 0, cnt2 = 0, answer;
    for (int i = 0; i < array_len; i++) {
        for (int j = 0; j < array_len; j++) {
            if (array[i] < array[j]) {
                cnt1++;
            }
            else if (array[i] > array[j]) {
                cnt2++;
            }
        }
        if (cnt1 == cnt2) {
            return array[i];
        }
        cnt1 = 0;
        cnt2 = 0;
    }
}