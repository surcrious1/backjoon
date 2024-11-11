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
        printf("%d. %s\n", i+1, a);
    }
    return 0;
}