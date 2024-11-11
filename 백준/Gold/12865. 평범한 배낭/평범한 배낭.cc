#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;
int dp[101][100001] = { 0, };
int weight[101] = { 0, }, value[101] = { 0, };
int main(void) {
	int n, totalweight, max = 0, i, j;
	scanf("%d %d", &n, &totalweight);
	for (i = 1; i <= n; i++) {
		scanf("%d %d", &weight[i], &value[i]);
		for (j = 1; j <= totalweight; j++) {
			if (j - weight[i] >= 0) {
				if (dp[i - 1][j - weight[i]] + value[i] > dp[i - 1][j]) {
					dp[i][j] = dp[i - 1][j - weight[i]] + value[i];
					//printf("1. dp %d %d %d %d\n", i, j, dp[i][j], dp[i - 1][j - weight[i]] + value[i]);
				}
				else {
					dp[i][j] = dp[i - 1][j];
					//printf("2. dp %d %d %d %d\n", i, j, dp[i][j], dp[i - 1][j]);
				}
			}
			else {
				dp[i][j] = dp[i - 1][j];
				//printf("3. dp %d %d %d %d\n", i, j, dp[i][j], dp[i - 1][j]);
			}
			if (max < dp[i][j]) max = dp[i][j];
			//printf("check %d %d\n", dp[i - 1][j - weight[i]] + value[i], dp[i - 1][j]);
		}
	}
	printf("%d", max);
	return 0;
}