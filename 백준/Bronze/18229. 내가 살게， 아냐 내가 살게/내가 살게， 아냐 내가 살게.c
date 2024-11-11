#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	unsigned long long  n, m, k, arr[100][101], sum[100] = { 0, }, cnt[101] = { 0, }, min, check = 0;
	scanf("%llu %llu %llu", &n, &m, &k);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%llu", &arr[i][j]);
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			sum[j] += arr[j][i];
			cnt[j] = i + 1;
			if (sum[j] >= k) {
				min = j;
				check = 1;
				break;
			}
		}
		if (check == 1) break;
	}
	printf("%llu %llu", min + 1, cnt[min]);
	return 0;
}