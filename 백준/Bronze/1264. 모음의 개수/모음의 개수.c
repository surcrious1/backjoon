#include<stdio.h>
#include<string.h>

int main() {
    char a[255];
    int cnt;
    while (1) {
        cnt = 0;
        gets(a);
        if (strcmp(a, "#") == 0) return 0;
        else {
            for (int i = 0; i < strlen(a); i++) {
                if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
                    cnt++;
                }
                else if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}