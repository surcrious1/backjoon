#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int main(void) {
	int n, m, arr[2][50] = { 0, }, package, gack, min = 123456789;
	int sum1, sum2, sum3;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) scanf("%d %d", &arr[0][i], &arr[1][i]);
	package = arr[0][0];
	gack = arr[1][0];
	for (int i = 1; i < m; i++) {
		if (arr[0][i] < package) package = arr[0][i];
		if (arr[1][i] < gack) gack = arr[1][i];
	}
	sum1 = package * (n / 6 + 1);
	sum2 = package * (n / 6) + gack * (n % 6);
	sum3 = gack * n;
	if (sum1 <= sum2 && sum1 <= sum3) min = sum1;
	else if (sum2 <= sum1 && sum2 <= sum3) min = sum2;
	else min = sum3;
	printf("%d", min);
	return 0;
}