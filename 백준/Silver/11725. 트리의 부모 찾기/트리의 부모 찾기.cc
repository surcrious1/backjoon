#include<stdio.h>
#include<queue>
using namespace std;
int n, m;
vector<int>v[100001];
vector<bool>vi(100001);
int p[100001];
void bfs(int x) {
	queue<int>q;
	q.push(x);
	vi[x] = 1;
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (auto j : v[now]) {
			if (vi[j] == 0) {
			vi[j] = 1;
			p[j] = now;
			q.push(j);
			}
		}
	}
}
int main() {
	int a, b;
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	bfs(1);
	for (int i = 2; i <= n; i++) {
		printf("%d\n", p[i]);
	}
}