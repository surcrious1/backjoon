#include<iostream>

using namespace std;

int arr[100001] = { 0, };
int jump[100001];

void color(int a,int b, int x) {
	for (int i = a; i < b + 1; i++) {
		//printf("/%d %d %d\n", i, arr[i], jump[i]);
		if (arr[i] == 0) {
			arr[i] = x;
		}
		else i = jump[i];
	}
	jump[a] = b;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m;
	int a, b, x;
	
	cin >> n >> m;

	for (int i = 1; i <= n; i++) jump[i] = i;

	for (int i = 0; i < m; i++) {
		cin >> a >> b >> x;
		color(a, b, x);
	}
	for (int i = 1; i <= n; i++) printf("%d ", arr[i]);
	return 0;
}