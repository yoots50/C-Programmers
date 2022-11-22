#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int n) {
    int length = 0;
    int sum = 0;
    while (1) {
        if (pow(10, length) > n) {
            break;
        }
        length++;
    }
    for (int i = 0; i < length; i++) {
        sum += n / pow(10, length - 1 - i);
        n -= (int)(n / pow(10, length - 1 - i)) * pow(10, length - 1 - i);
    }
    return sum;
}