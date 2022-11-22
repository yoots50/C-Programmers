#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    int sale = 0;
    if (price >= 100000) {
        sale += 5;
    }
    if (price >= 300000) {
        sale += 5;
    }
    if (price >= 500000) {
        sale += 10;
    }
    return price * (100 - sale) / 100;
}