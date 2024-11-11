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
	int dp[10001] = { 0, }, arr[10001] = { 0, };
	int n,wine,max;
	scanf("%d", &n);
	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &wine);
		arr[i] = wine;
		if (i == 1) {
			dp[1] = wine;
			max = dp[1];
		}
		else if(i == 2) {
			dp[2] = dp[1] + wine;
			max = dp[2];
		}
		else {
			max = dp[i - 1];										//i를 먹지 않는 경우
			if (max < wine + dp[i - 2]) max = wine + dp[i - 2];		//i를 먹고 i-1을 먹지 않는 경우
			if (max < wine + arr[i - 1] + dp[i - 3]) max = wine + arr[i - 1] + dp[i - 3];	//그외
			dp[i] = max;
		}
	}
	printf("%d", max);
	return 0;
}
