#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	unsigned long long arr[100001], n, cnt = 0, max = 0;
	scanf("%llu\n", &n);
	for (int i = 0; i < n; i++) {
		scanf("%llu", &arr[i]);
	}
	for (int i = n - 1; i >= 0; i--) {
		if (arr[i] > max) {
			cnt++;
			max = arr[i];
		}
		//printf("i %llu max %llu cnt %llu\n", i, max, cnt);
	}
	printf("%d", cnt);
	return 0;
}