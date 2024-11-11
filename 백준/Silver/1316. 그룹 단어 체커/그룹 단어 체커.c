#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    int n;
    int cnt = 0;
    int gap;
    int result = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        cnt = 0;
        scanf("%s", s);
        if (strlen(s) < 3) cnt = 0;
        else if (strlen > 2) {
            for (int j = 0; j < strlen(s); j++) {
                for (int k = j + 1; k < strlen(s); k++) {
                    if (s[j] == s[k]) {
                        gap = k - j;
                        if (gap > 1) {
                            if (s[j] != s[k - 1]) {
                                cnt++;
                            }
                        }
                    }
                }
            }
        }
        if (cnt == 0) result++;
    }
    printf("%d\n", result);
    return 0;
}