#include<stdio.h>
#include<string.h>

int main() {
    int a[100][100];
    int i, j;
    int max = -1;
    int n, m;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            scanf("%d", &a[i][j]);
            if (max < a[i][j]) {
                max = a[i][j];
                n = i;
                m = j;
            }
        }
    }
    printf("%d\n%d %d", max, n+1, m+1);
    return 0;
}