#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int order) {
    int length = 0, cnt = 0;
    while ((int)pow(10, length) < order) {
        length++;
    }
    for (int i = 0; i < length; i++) {
        if (!(order / (int)pow(10, length - i - 1) % 3) && order / (int)pow(10, length - i - 1) != 0) {
            cnt++;
        }
        order -= (order / (int)(pow(10, length - i - 1))) * (int)(pow(10, length - i - 1));
    }
    return cnt;
}