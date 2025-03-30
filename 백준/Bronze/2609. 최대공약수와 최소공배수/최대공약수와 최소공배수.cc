#include<iostream>
#include<algorithm>
using namespace std;
int arr[1000001];
int main() {
	int n, m;
	int range;
	int mini=1, maxi=1;
	cin >> n >> m;
	if (n < m)range = n;
	else range = m;
	for (int i = range; i > 0; i--) {
		if (n % i == 0 && m % i == 0) {
			maxi = i;
			break;
		}
	}
	for (int i = range; ; i++) {
		if (i % n == 0 && i % m == 0) {
			mini = i;
			break;
		}
	}
	cout << maxi << "\n" << mini << endl;
}