#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    int l;
    scanf("%s", &s);
    l = strlen(s);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == 'c') {
            if (s[i + 1] == '=') l -= 1;
            else if (s[i + 1] == '-') l -= 1;
        }
        else if (s[i] == 'd') {
            if (s[i + 1] == 'z') {
                if (s[i + 2] == '=') {
                    l -= 1;
                }
            }
            else if (s[i + 1] == '-') l -= 1;
        }
        else if (s[i] == 'l') {
            if (s[i + 1] == 'j') l -= 1;
        }
        else if (s[i] == 'n') {
            if (s[i + 1] == 'j') l -= 1;
        }
        else if (s[i] == 's') {
            if (s[i + 1] == '=') l -= 1;
        }
        if (s[i] == 'z') {
            if (s[i + 1] == '=') {
                l -= 1;
            }
        }
    }
    printf("%d", l);
    return 0;
}