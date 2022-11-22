#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    int idx = 0;
    while (my_string[idx]) {
        idx++;
    }
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc((idx + 1) * sizeof(char));
    idx = 0;
    while (*my_string) {
        if (65 <= *my_string && *my_string <= 90) {
            answer[idx] = *my_string + 32;
        } else {
            answer[idx] = *my_string - 32;
        }
        idx++;
        my_string++;
    }
    answer[idx] = '\0';
    return answer;
}