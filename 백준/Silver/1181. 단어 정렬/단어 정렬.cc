#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

char str[20000][51];
char tmp[20000][51];

void merge(int left, int mid, int right) {
    int a = left;
    int b = mid+1;
    int c = left;
    while (a <= mid && b <= right) {
        if (strlen(str[a]) < strlen(str[b])) {
            strcpy(tmp[c], str[a]);
            a++;
            c++;
        }
        else if (strlen(str[a]) > strlen(str[b])) {
            strcpy(tmp[c], str[b]);
            b++;
            c++;
        }
        //길이가 같은 경우, 즉 사전순 정렬
        else {
            if (strcmp(str[a], str[b]) < 0) {
                strcpy(tmp[c], str[a]);
                a++;
                c++;
            }
            else {
                strcpy(tmp[c], str[b]);
                b++;
                c++;
            }
        }
        
    }
    if (a > mid) {
        while (b <= right) {
            strcpy(tmp[c], str[b]);
            b++;
            c++;
        }
    }
    else {
        while (a <= mid) {
            strcpy(tmp[c], str[a]);
            a++;
            c++;
        }
    }
    for (int i = left; i <= right; i++) strcpy(str[i], tmp[i]);
}

void partition(int left, int right) {
    int mid = (left + right) / 2;
    if (left >= right) return;
    else {
        partition(left, mid);
        partition(mid + 1, right);
        merge(left, mid, right);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i<n; i++) {
        scanf("%s", str[i]);
    }
    partition(0, n - 1);
    for (int i = 0; i < n; i++) {
        if (i == 0) printf("%s\n", str[i]);
        else if (strcmp(str[i - 1], str[i]) != 0) printf("%s\n", str[i]);
    }
    return 0;
}