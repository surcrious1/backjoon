#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(void) {
	int n, m = 1, sum = 1;
	scanf("%d", &n);
	while (1) {
		sum += m * 6 - 6;
		if (n <= sum) break;
		m++;
	}
	printf("%d", m);
	return 0;
}