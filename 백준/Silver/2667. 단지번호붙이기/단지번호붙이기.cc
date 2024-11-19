#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;
int n, arr[25][25] = { 0, }, check[25][25] = { 0, }, cnt = 0, danji[1000] = { 0, };
//dfs
void dfs(int y, int x) {
	check[y][x] = cnt;
	danji[cnt - 1]++;
	if (x - 1 >= 0 && arr[y][x - 1] == 1 && check[y][x - 1] == 0)dfs(y, x - 1);
	if (x + 1 < n && arr[y][x + 1] == 1 && check[y][x + 1] == 0)dfs(y, x + 1);
	if (y - 1 >= 0 && arr[y - 1][x] == 1 && check[y - 1][x] == 0)dfs(y - 1, x);
	if (y + 1 < n && arr[y + 1][x] == 1 && check[y + 1][x] == 0)dfs(y + 1, x);
}
int main(void) {
	char num[26] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", num);
		for (int j = 0; j < n; j++) {
			if(num[j] == '1') arr[j][i] = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[j][i] == 1 && check[j][i] == 0) {
				cnt++;
				dfs(j, i);
			}
		}
	}
	sort(danji, danji + cnt);
	printf("%d\n", cnt);
	for (int i = 0; i < cnt; i++) printf("%d\n", danji[i]);
	return 0;
}