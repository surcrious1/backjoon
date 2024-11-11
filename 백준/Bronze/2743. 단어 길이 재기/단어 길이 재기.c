#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    char spl[100];
    int cnt = 0;
    scanf("%s", &spl);
    for (int i = 0; spl[i] != '\0'; i++) {
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}