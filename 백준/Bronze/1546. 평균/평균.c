#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int n;
    float sbj[1000];
    int max;
    float sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {//arr
        scanf("%f", &sbj[i]);
    }
    max = sbj[0];
    for (int i = 1; i < n; i++) {//max
        if (max < sbj[i]) {
            max = sbj[i];
        }
    }
    for (int i = 0; i < n; i++) {
        sum = sum + (sbj[i] / max) * 100;
    }
    printf("%f", sum / n);
    return 0;
}