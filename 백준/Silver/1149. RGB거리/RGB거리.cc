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
	int n, min, i;
	int arr[1001][3] = { 0, }, dp[1001][3] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) for (int j = 0; j < 3; j++) scanf("%d", &arr[i][j]);
	dp[0][0] = 0;
	dp[0][1] = 0;
	dp[0][2] = 0;
	for (i = 1; i <= n; i++) {
		//0/12
		if (dp[i - 1][1] < dp[i - 1][2]) dp[i][0] = dp[i - 1][1] + arr[i - 1][0];
		else dp[i][0] = dp[i - 1][2] + arr[i - 1][0];
		min = dp[i][0];
		//1/02
		if (dp[i - 1][0] < dp[i - 1][2]) dp[i][1] = dp[i - 1][0] + arr[i - 1][1];
		else dp[i][1] = dp[i - 1][2] + arr[i - 1][1];
		if (min > dp[i][1]) min = dp[i][1];
		//2/01
		if (dp[i - 1][0] < dp[i - 1][1]) dp[i][2] = dp[i - 1][0] + arr[i - 1][2];
		else dp[i][2] = dp[i - 1][1] + arr[i - 1][2];
		if (min > dp[i][2]) min = dp[i][2];
	}
	printf("%d", min);
	return 0;
}