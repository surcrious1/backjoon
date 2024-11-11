#include<stdio.h>
#include<string.h>

int main() {
    char a[100][100];
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%c", &a[i][j]);
        }
        getchar();
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == a[j][i]) continue;
            else {
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
    return 0;
}