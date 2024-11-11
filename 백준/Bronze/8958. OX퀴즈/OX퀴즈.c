#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


int main() {
    char s[80];
    int n;
    int sum = 0;
    int score = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        sum = 0;
        score = 1;
        scanf("%s", s);
        for (int j = 0; j < strlen(s); j++) {
            if (s[j]=='O') {
                sum += score;
                score += 1;
            }
            else if (s[j]=='X') {
                score = 1;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
