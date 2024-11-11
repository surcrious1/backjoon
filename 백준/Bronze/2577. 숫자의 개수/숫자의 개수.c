#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
    int sum = 1;
    int input;
    int a[10] = { 0 };
    for (int i = 0; i < 3; i++) {
        scanf("%d", &input);
        sum *= input;
    }
    for (int i = 0; sum > 0;i++) {
        input = sum % 10;
        a[input]++;
        sum /= 10;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", a[i]);
    }
}