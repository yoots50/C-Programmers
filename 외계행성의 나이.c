#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

char* solution(int age) {
    int i = 0;
    int length;
    while (age >= pow(10, i)) {
        i++;
    }
    length = i;
    i = 0;
    char* temp = (char*)malloc(length * sizeof(char));
    while (1) {
        if (age < 10) {
            temp[i] = age + 97;
            break;
        }
        temp[i] = age % 10 + 97;
        age = age / 10;
        i++;
    }
    temp[length] = '\0';
    i = 0;
    char* answer = (char*)malloc(length * sizeof(char));
    while (temp[i]) {
        answer[i] = temp[length - i - 1];
        i++;
    }
    answer[length] = '\0';
    free(temp);
    return answer;
}