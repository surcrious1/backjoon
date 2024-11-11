#include<stdio.h>
#include<string.h>

int main() {
    char k[30000];
    char a[30000];
    char x;
    gets(a);
    gets(k);
    for (int i = 0; i < strlen(a); i++) {
        if (a[i]==' ') {
            printf(" ");
        }
        else if ('a' <= a[i] && a[i] <= 'z') {
            char x = a[i] - k[i % strlen(k)] -1 + 'a';
            if (x < 'a') {
                x += 26;
                printf("%c", x);
            }
            else printf("%c", x);
        }
    }
    return 0;
}