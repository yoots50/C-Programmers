#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int n) {
    if (pow((int)sqrt(n), 2) == n) {
        return 1;
    }
    return 2;
}