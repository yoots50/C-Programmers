#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    int idx = 0;
    int length = 0;
    int cnt = 0;
    char arr[5] = {'a','e','i','o','u'};
    while (my_string[idx]) {
        idx++;
    }
    length = idx;
    idx = 0;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(length * sizeof(char));
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < 5; j++) {
            if (my_string[i] == arr[j]) {
                cnt = 1;
            }
        }
        if (cnt == 0) {
            answer[idx] = my_string[i];
            idx++;
        }
        cnt = 0;
    }
    answer[idx] = '\0';
    return answer;
}