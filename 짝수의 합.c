#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int sum = 0;
    if (n == 1) {
        return 0;
    }
    else if (n % 2) {
        n = (n - 1) / 2;
    } else {
        n /= 2;
    }
    return n * (n + 1);
}