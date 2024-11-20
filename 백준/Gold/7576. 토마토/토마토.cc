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

queue<int> x;
queue<int> y;
int tomato[1000][1000] = { 0, }, day = 0, n, m;
void dfs() {
	int xx, yy;
	while (!x.empty()) {
		xx = x.front();
		yy = y.front();
		x.pop();
		y.pop();
		if (xx - 1 >= 0 && tomato[yy][xx - 1] == 0) {
			tomato[yy][xx - 1] = tomato[yy][xx] + 1;
			x.push(xx - 1);
			y.push(yy);
		}
		if (xx + 1 < n && tomato[yy][xx + 1] == 0) {
			tomato[yy][xx + 1] = tomato[yy][xx] + 1;
			x.push(xx + 1);
			y.push(yy);
		}
		if (yy - 1 >= 0 && tomato[yy - 1][xx] == 0) {
			tomato[yy - 1][xx] = tomato[yy][xx] + 1;
			x.push(xx);
			y.push(yy - 1);
		}
		if (yy + 1 < m && tomato[yy + 1][xx] == 0) {
			tomato[yy + 1][xx] = tomato[yy][xx] + 1;
			x.push(xx);
			y.push(yy + 1);
		}
	}
}
int main() {
	int max = 0;
	scanf("%d %d", &m, &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &tomato[j][i]);
			if (tomato[j][i] == 1) {
				x.push(i);
				y.push(j);
			}
		}
	}
	dfs();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (tomato[j][i] == 0) {
				printf("-1");
				return 0;
			}
			if (tomato[j][i] > max) max = tomato[j][i];
		}
	}
	printf("%d", max - 1);
	return 0;
}