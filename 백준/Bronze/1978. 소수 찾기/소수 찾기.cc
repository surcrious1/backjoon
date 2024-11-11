#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(void) {
	int n, m, cnt = 0, many = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		if (m != 1) {
			for (int j = 2; j < m; j++) if (m % j == 0) many++;
			if (many == 0) cnt++;
			else many = 0;
		}
	}
	printf("%d", cnt);
	return 0;
}