#include<stdio.h>
int main(void) {
	int m, n, sum = 0, mini = 10000;
	scanf("%d %d", &m, &n);
	for (int i = 1; ; i++) {
		if (n < i * i) {
			if (sum == 0) printf("-1");
			else printf("%d\n%d", sum, mini);
			return 0;
		}
		if (m <= i * i) {
			sum += i * i;
			if (i * i < mini)mini = i * i;
		}
	}
}