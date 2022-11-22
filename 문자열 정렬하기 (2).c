#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    int idx = 0, length = 0, cnt = 1, tempi;
    char min = 123;
    while (my_string[idx]) {
        idx++;
    }
    length = idx;
    idx = 0;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answerTemp = (char*)malloc(length * sizeof(char));
    char* answer = (char*)malloc(length * sizeof(char));
    while (my_string[idx]) {
        if (65 <= my_string[idx] && my_string[idx] <= 90) {
            answerTemp[idx] = my_string[idx] + 32;
        }
        else {
            answerTemp[idx] = my_string[idx];
        }
        idx++;
    }
    answerTemp[idx] = '\0';
    idx = 0;
    while (idx < length) {
        for (int i = 0; i < length; i++) {
            if (min > answerTemp[i] && answerTemp[i] != 48) {
                min = answerTemp[i];
                tempi = i;
            }
        }
        answer[idx] = min;
        min = 123;
        idx++;
        answerTemp[tempi] = '0';
    }
    answer[idx] = '\0';
    return answer;
}