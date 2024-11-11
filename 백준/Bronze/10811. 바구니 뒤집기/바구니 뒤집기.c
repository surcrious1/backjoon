#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int a[100];//size_n
    int tmp;
    int n, m;
    int i, j;
    scanf("%d %d", &n, &m);
    for (int k = 0; k < n; k++) {
        a[k] = k + 1;
    }
    for (int k = 0; k < m; k++) {
        scanf("%d %d", &i, &j);
        for (int t = 0; t < j - i + 1;) {
            tmp = a[j - 1];
            a[j - 1] = a[i - 1];
            a[i - 1] = tmp;
            j--;
            i++;
        }
    }
    for (int s = 0; s < n; s++) {
        printf("%d\n", a[s]);
    }
    return 0;
}