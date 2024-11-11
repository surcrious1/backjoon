#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int n1, n2, n3, n4, n5;
    int sum;
    int result;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    sum = n1 * n1 + n2 * n2 + n3 * n3 + n4 * n4 + n5 * n5;
    result = sum % 10;
    printf("%d", result);
    return 0;
}