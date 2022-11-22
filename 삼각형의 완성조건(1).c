#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int max = 0;
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += sides[i];
        if (max < sides[i]) {max = sides[i];}
    }
    if (sum - max > max) {return 1;}
    return 2;
}