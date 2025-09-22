#include<iostream>

using namespace std;

int num[1001] = { 0, };

int where(int now, int max, int gap) {
	int cnt = 0, flag = 0;
	while(1) {
		flag = 0;
		//cout << now << cnt << endl;
		if (num[now] == 0) {
			cnt++;
			if (cnt == gap) {
				cout <<  now + 1;
				num[now] = 1;
				cnt = 0;
				flag = 1;
			}
		}
		if (flag == 1) {
			return now;
		}
		now++;
		if (now == max) now = 0;
	}
}
int main() {
	int n, k, start = 0;
	cin >> n >> k;
	cout << "<";
	for (int i = 0; i < n; i++) {
		start = where(start, n, k);
		if (i != n - 1) cout << ", ";
	}
	cout << ">";
	return 0;
}
