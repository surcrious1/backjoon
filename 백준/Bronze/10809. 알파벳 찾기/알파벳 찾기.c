#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    int a[26];
    int input;
    for (int i = 0; i < 26; i++) {
        a[i] = -1;
    }
    scanf("%s", &s);
    for (int i = 0; i < strlen(s); i++) {
        input = s[i] - 97;
        if(a[input]==-1)a[input] = i;
    }
    for (int i = 0; i < 26; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}