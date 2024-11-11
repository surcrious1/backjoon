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
	int n, m, five = 0, three = 0, dp[1001] = { 0, }, min = 987654321;
	scanf("%d", &n);
	five = n / 5;
	for (int i = 0; i <= five; i++) {
		m = n;
		m -= i * 5;
		three = m / 3;
		m -= three * 3;
		if (m != 0) dp[i] = -1;
		else dp[i] = three + i;
		if (dp[i] != -1 && min > dp[i]) min = dp[i];
	}
	if (min != 987654321 && min > 0) printf("%d", min);
	else printf("-1");
	return 0;
}