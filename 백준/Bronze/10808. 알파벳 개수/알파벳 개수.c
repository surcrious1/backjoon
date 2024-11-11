#include<stdio.h>
#include<string.h>

int main() {
    int a[26] = { 0, };
    char s[100];
    gets(s);
    for (int i = 0; i < strlen(s); i++) {
        a[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}