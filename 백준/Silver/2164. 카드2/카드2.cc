#include<iostream>
#include<queue>
using namespace std;
int arr[500001];
int main() {
	int n;
	queue<int> q;
	cin >> n;
	if (n == 1) {
		printf("1");
		return 0;
	}
	for (int i = 0; i < n; i++) q.push(i + 1);
	while (1) {
		q.pop();
		if (q.size() == 1) {
			printf("%d", q.front());
			return 0;
		}
		int temp = q.front();
		q.push(temp);
		q.pop();
	}
}