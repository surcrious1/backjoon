#include<stdio.h>
#include<string.h>

int main() {
    char a[50];
    int n;
    scanf("%d", &n);
    char b[1] = { 0 };
    gets(b);
    for (int i = 0; i < n;i++) {
        gets(a);
        for (int j = 0; j < strlen(a); j++) {
            if ('A' <= a[j] && a[j] <= 'Z') a[j] = a[j] + 32;
        }
        printf("%s\n", a);
    }
    return 0;
}