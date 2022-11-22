#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int idx = 0, answer = 0;
    while (my_string[idx]) {
        idx++;
    }
    for (int i = 0; i < idx; i++) {
        if (48 <= my_string[i] && my_string[i] <= 57) {
            answer += my_string[i] - 48;
        }
    }
    return answer;
}