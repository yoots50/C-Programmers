#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void copyStr(char* target, char* str) {
    while (*str) {
        *target = *str;
        target++;
        str++;
    }
}

char* solution(int num) {
    char str1[4] = "Even", str2[3] = "Odd";
    if (num % 2) {
        char* answer = (char*)malloc(3);
        copyStr(answer, str2);
        answer[3] = '\0';
        return answer;
    }
    else {
        char* answer = (char*)malloc(4);
        copyStr(answer, str1);
        answer[4] = '\0';
        return answer;
    }
}