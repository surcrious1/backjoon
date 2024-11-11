#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int main(void) {
	int n, arr[3][51] = { 0, }, temp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &arr[0][i], &arr[1][i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[0][i] > arr[0][j] && arr[1][i] > arr[1][j]) arr[2][j]++;
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", 1 + arr[2][i]);
	}
	return 0;
}