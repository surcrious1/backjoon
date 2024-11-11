#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {
	int n, m;
	int arr[101];
	int max = 0;
	int sum = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n-2; i++) {
		sum = 0;
		for (int j = i + 1; j < n-1; j++) {
			for (int h = j + 1; h < n; h++) {
				sum = arr[i] + arr[j] + arr[h];
				if (sum <= m && max < sum) max = sum;
			}
		}
	}
	printf("%d\n", max);
	return 0;
}