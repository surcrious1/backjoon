#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int n,p;
	unsigned long long num[101] = { 1,1,1,2,2 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &p);
		if (p <= 5) {
			printf("%lld\n", num[p - 1]);
		}
		else {
			for (int j = 5; j < p; j++) {
				num[j] = num[j - 5] + num[j - 1];
			}
			printf("%lld\n", num[p - 1]);
		}
	}
	return 0;
}