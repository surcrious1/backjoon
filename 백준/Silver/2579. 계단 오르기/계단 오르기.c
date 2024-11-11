#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	int stair[300] = { 0, }, cnt = 0, n;
	int dp[300] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &stair[i]);
	}
	dp[0] = stair[0];
	dp[1] = stair[0] + stair[1];
	if (stair[0] + stair[2] < stair[1] + stair[2]) dp[2] = stair[1] + stair[2];
	else dp[2] = stair[0] + stair[2];
	for (int i = 3; i < n; i++) {
		if (stair[i] + stair[i - 1] + dp[i - 3] <= stair[i] + dp[i - 2]) dp[i] = stair[i] + dp[i - 2];
		else dp[i] = stair[i] + stair[i - 1] + dp[i - 3];
	}
	printf("%d", dp[n - 1]);
	return 0;
}