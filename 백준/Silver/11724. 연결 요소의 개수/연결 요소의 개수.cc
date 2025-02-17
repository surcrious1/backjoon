#include<stdio.h>
int arr[1001][1001] = { 0, }, v[1001] = { 0, };
void dfs(int x, int n) {
	v[x] = 1;
	for (int i = 1; i <= n; i++) {
		if (v[i] == 0 && arr[x][i] == 1) {
            dfs(i, n);
        }
	}
}
int main() {
	int n, m, a, b, cnt = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	for (int i = 1; i <= n; i++) {
		if (v[i] == 0) {
			dfs(i, n);
			cnt++;
		}
	}
	printf("%d", cnt);
}