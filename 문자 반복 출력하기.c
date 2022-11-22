#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int n) {
    int idx = 0, length = 0;
    while (my_string[idx]) {
        length++;
        idx++;
    }
    idx = 0;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(length * sizeof(char) * n);
    while (*my_string) {
        for (int i = 0; i < n; i++) {
            answer[idx * n + i] = *my_string;
            printf("%d\n", idx * n + i);
        }
        idx++;
        my_string++;
    }
    answer[length * sizeof(char) * n] = '\0';
    return answer;
}