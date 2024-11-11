#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int tc,n,cnt;
	int a, sum;
	float b,avg;
	scanf("%d", &tc);
	for (int i = 0; i < tc; i++) {
		sum = 0;
		avg = 0;
		cnt = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d %f", &a, &b);
			sum += a;
			avg += a * b;
			cnt++;
		}
		printf("%d %.1f\n", sum, avg / sum);
	}
	return 0;
}