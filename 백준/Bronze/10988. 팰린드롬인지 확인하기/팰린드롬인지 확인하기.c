#include<stdio.h>
#include<string.h>

int main() {
    int n;
    char s[100];
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == s[strlen(s) - i - 1]) {}
        else {
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}