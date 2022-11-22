#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* str1, const char* str2) {
    int i = 0, cnt = 0, length = 0;
    while(str2[i]) {
        length++;
        i++;
    }
    i = 0;
    while(str1[i]) {
        for (int j = 0; j < length; j++) {
            if (str1[i + j] == str2[j]) {
                cnt++;
            }
        }
        if (cnt == length) {
            return 1;
        }
        i++;
    }
    return 2;
}