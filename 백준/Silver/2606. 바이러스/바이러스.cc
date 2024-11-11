#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int matrix[101][101] = { 0, }, visit[101] = { 0, }, cnt = 0;

void newmatrix(int n) {
	int a, b;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		matrix[a][b] = 1;
		matrix[b][a] = 1;
	}
}

void virus(int s, int t) {
	visit[s] = 1;
	for (int i = 1; i <= t; i++) {
		if (visit[i] || !matrix[s][i]) continue;
		cnt++;
		virus(i, t);
	}
}

int main(void) {
	int computer, n;
	scanf("%d %d", &computer, &n);
	newmatrix(n);
	virus(1, computer);
	printf("%d", cnt);
	return 0;
}
