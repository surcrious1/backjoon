#include<stdio.h>
#include<string.h>

int main() {
    int n;
    char s[100];
    int sum = 0;
    scanf("%d", &n);
    scanf("%s", &s);
    for (int i = 0; i < n; i++) {
        sum += s[i] - 48;
    }
    printf("%d", sum);
    return 0;
}