#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* rsp) {
    int strlen = 0;
    while (rsp[strlen]) {
        strlen++;
    }
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * strlen);
    for (int i = 0; i < strlen; i++) {
        if (rsp[i] == 48) {
            answer[i] = 53;
        }
        else if (rsp[i] == 53) {
            answer[i] = 50;
        }
        else {
            answer[i] = 48;
        }
    }
    answer[strlen] = '\0';
    return answer;
}