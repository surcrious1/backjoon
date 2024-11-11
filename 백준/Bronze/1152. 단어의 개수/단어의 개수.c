#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
    char str[1000001];
    int cnt = 0;
    scanf("%[^\n]s", &str);
    if (strlen(str) == 1&&str[0]==' ') {
        printf("%d",cnt);
        return 0;
    }
    for (int i = 1; i < strlen(str)-1; i++) {
        if (str[i] == ' ') {
            cnt++;
        }
    }
    printf("%d", cnt+1);
    return 0;
}