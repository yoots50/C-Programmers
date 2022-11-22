#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int i = 1;
    while(1) {
        if (n <= 7 * i) {
            return i;
        } else {i++;}
    }
}