#include<stdio.h>
#include<string.h>

int main() {
    char a[500];
    int temp;
    while (1) {
        gets(a);
        if (strcmp(a, "END") == 0) return 0;
        else {
            for (int i = 0; i < strlen(a) / 2; i++) {
                temp = a[i];
                a[i] = a[strlen(a) - i - 1];
                a[strlen(a) - 1 - i] = temp;
            }
        }
        printf("%s\n", a);
    }
    return 0;
}