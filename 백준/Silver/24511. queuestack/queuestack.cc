#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<stack>
#include<queue>

using namespace std;

int arr[100000] = { 0, }, num[100000] = { 0, };
int main(void) {
	int n, m, l, temp;
	queue<int>q;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d ", &arr[i]);
	for (int i = 0; i <n; i++) scanf("%d", &num[i]);
	for (int i = n - 1; i >= 0; i--) if (arr[i] == 0) q.push(num[i]);
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &l);
		q.push(l);
		printf("%d ", q.front());
		q.pop();
	}
	return 0;
}