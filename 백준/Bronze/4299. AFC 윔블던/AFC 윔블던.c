#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int p, n;
	int cnt = 0;
	scanf("%d %d", &p, &n);
	if (p >= n&&p>=0&&n>=0) {
		for (int i = 0;i <= p; i++) {
			for (int j = 0; j <= p; j++) {
				cnt = 0;//cnt reset
				if (p == j + i) cnt++;//p check
				if (n == j - i) cnt++;//n check
				if (cnt == 2) {//p,n print
					printf("%d %d", j, i);
					return 0;
				}
			}
		}
	}
	printf("-1");
	return 0;
}