#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int num, int k) {
    int length = 0, idx = 1;
    while (pow(10, length) < num) {
        length++;
    }
    if (num < 10) {
        if (num == k) {
            return 1;
        }
        else {
            return -1;
        }
    }
    while (length) {
        if (num / (int)pow(10, length - 1) == k) {
            return idx;
        }
        if (!(num / (int)pow(10, length - 1) % 10)) {
            if (!k) {
                return idx + 1;
            }
            num -= (num / (int)pow(10, length - 1)) * (int)pow(10, length);
            length -= 2;    
        }
        else {
            idx++;
            num -= (num / (int)pow(10, length - 1)) * (int)pow(10, length - 1);
            length--;
        }
    }
    return -1;
}