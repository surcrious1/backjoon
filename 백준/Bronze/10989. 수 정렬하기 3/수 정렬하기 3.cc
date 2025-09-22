#include<iostream>

using namespace std;

int main() {
	int arr[10001] = { 0, };
	int n, m, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		arr[m]++;
	}
	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) printf("%d\n", i);
		cnt += arr[i];
		if (cnt == n) break;
	}
	return 0;
}
