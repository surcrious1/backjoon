#include<iostream>

using namespace std;

int safezone = 0, n, m;
int visit[1000][1001] = { 0, };
char arr[1000][1000];

void dfs(int x, int y) {
	visit[x][y] = 1;
	
	int nx = x, ny = y;

	if (arr[x][y] == 'D') nx++;
	else if (arr[x][y] == 'U') nx--;
	else if (arr[x][y] == 'R') ny++;
	else if (arr[x][y] == 'L') ny--;
	
	if (visit[nx][ny] == 0) dfs(nx, ny);
	else if (visit[nx][ny] == 1) {	//visit확인, 1은 사이클 종료
		safezone++;
	}
	visit[x][y] = 2;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> arr[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visit[i][j] == 0) 
				dfs(i, j);
		}
	}
	cout << safezone << endl;
	return 0;
}