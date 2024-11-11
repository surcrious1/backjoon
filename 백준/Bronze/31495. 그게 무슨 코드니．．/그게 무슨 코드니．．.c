#include<stdio.h>
#include<string.h>

int main() {
    char s[50];
    int cnt = 0;
    gets(s);
    if (strlen(s) >= 3) {
        if (s[0] == '\"' && s[strlen(s) - 1] == '\"') {
            for (int i = 1; i < strlen(s) - 1; i++) printf("%c", s[i]);
        }
        else {
            printf("CE");
        }
    }
    else printf("CE");
    return 0;
}