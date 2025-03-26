#include<iostream>

using namespace std;

int arr[1000001];
int cnt[1000001];

int find(int n) {
	if (n == arr[n]) return n;
	else return arr[n] = find(arr[n]);
}

void group(int n, int m) {
	n = find(n);
	m = find(m);
	if (n == m) return;
	else if (n > m) {
		cnt[m] += cnt[n];
		arr[n] = m;
	}
	else {
		cnt[n] += cnt[m];
		arr[m] = n;
	}
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	for (int i = 1; i <= 1000000; i++) {
		arr[i] = i;
		cnt[i] = 1;
	}

	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		char a;
		int b, c;

		cin >> a;
	
		if (a == 'I') {
			cin >> b >> c;
			group(b, c);
		}
		else {//a == 'Q'
			cin >> b;
			cout << cnt[find(b)] << "\n";
		}
	}
	return 0;
}