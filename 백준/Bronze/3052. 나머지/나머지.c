#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int n[10];
    int m[42] = { 0 };
    int c = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n[i]);
        m[n[i] % 42]++;
    }
    for (int i = 0; i < 42; i++) {
        if (m[i] != 0) {
            c++;
        }
    }
    printf("%d", c);
    return 0;
}