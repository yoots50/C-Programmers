#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* letter) {
    int idx = 0, length = 0;
    while (my_string[idx]) {
        length++;
        idx++;
    }
    idx = 0;
    char* answer = (char*)malloc(1);
    while (*my_string) {
        if (*my_string != *letter) {
            answer[idx] = *my_string;
            idx++;
        }
        my_string++;
    }
    answer[idx] = '\0';
    return answer;
}