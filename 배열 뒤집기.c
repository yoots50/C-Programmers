#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], int num_list_len) {
    int* answer = (int*)malloc(num_list_len * sizeof(int));
    for (int i = 0; i < num_list_len; i++) {
        answer[i] = num_list[num_list_len - i - 1];
        printf("%d\n", num_list[num_list_len - i - 1]);
    }
    return answer;
}