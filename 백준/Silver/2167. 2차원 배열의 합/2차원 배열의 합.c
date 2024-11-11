#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main() {
	int n=0, m=0, k;
	int sum = 0;
	int arr[301][301] = { 0, };
	int i = 0, j = 0;
	int a, b, c, d;
	scanf("%d %d", &n,&m);
	for (i = 0; i < n;i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d", &k);
	for (i = 0; i < k; i++) {
		sum = 0;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		for (j = b - 1;j < d;j++) {
			for (int t = a - 1;t < c;t++) {
				sum += arr[t][j];
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
