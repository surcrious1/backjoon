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
int n, arr[1001][1001] = { 0, }, check1[1001] = { 0, }, check2[1001] = { 0, };
void dfs(int now) {
	check1[now] = 1;
	printf("%d ", now);
	for (int i = 1; i <= n; i++) {
		if (arr[now][i] == 1 && check1[i] != 1) {
			check1[i] = 1;
			dfs(i);
		}
	}
}
void bfs(int now) {
	queue<int> q;
	int node;
	q.push(now);
	check2[now] = 1;
	while (!q.empty()) {
		node = q.front();
		printf("%d ", node);
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (arr[node][i] == 1 && check2[i] != 1) {
				check2[i] = 1;
				q.push(i);
			}
		}
	}
}
int main(void) {
	int m, v, a, b;
	scanf("%d %d %d", &n, &m, &v);
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	dfs(v);
	printf("\n");
	bfs(v);
	return 0;
}