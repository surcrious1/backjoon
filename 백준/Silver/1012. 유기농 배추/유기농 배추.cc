#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
int arr[50][50] = { 0, };
int cnt = 0;
void dfs(int y, int x) {
	int nx, ny;
	arr[y][x] = 0;
	for (int i = 0; i < 4; i++) {
		nx = dx[i] + x;
		ny = dy[i] + y;
		if (nx < 0 || ny < 0) continue;
		if (arr[ny][nx] == 1) {
			dfs(ny, nx);
		}
	}
}
int main(void) {
	int tc, n, m, k;
	int x, y, cnt = 0;
	scanf("%d", &tc);
	for (int j = 0; j < tc; j++) {
		cnt = 0;
		scanf("%d %d %d", &n, &m, &k);			//n 행 m 열
		for (int i = 0; i < k; i++) {
			scanf("%d %d", &x, &y);
			arr[y][x] = 1;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[j][i] == 1) {
					cnt++;
					dfs(j, i);
				}
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}