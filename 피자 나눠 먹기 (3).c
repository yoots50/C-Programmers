#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int answer = 0;
    while (1) {
        if (slice * answer >= n) {
            break;
        }
        answer++;
    }
    return answer;
}