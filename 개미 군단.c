#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int jang, byung, il;
    jang = hp / 5;
    hp -= jang * 5;
    byung = hp / 3;
    hp -= byung * 3;
    il = hp;
    return jang + byung + il;
}