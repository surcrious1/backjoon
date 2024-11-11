#include<stdio.h>
#include<string.h>

int main() {
    char a[100];
    int m = 0;
    int o = 0;
    int b = 0;
    int I = 0;
    int s = 0;
    gets(a);
    for (int i = 0; i < strlen(a); i++) {
        if (a[i]=='M') m++;
        else if (a[i] == 'O') o++;
        else if (a[i] == 'B') b++;
        else if (a[i] == 'I') I++;
        else if (a[i] == 'S') s++;
    }
    if (m >= 1 && o >= 1 && b >= 1 && I >= 1 && s >= 1) printf("YES");
    else printf("NO");
    return 0;
}