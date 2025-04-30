#include<iostream>
#include<malloc.h>
int main(void) {
	int target, n;
	scanf("%d %d", &n, &target);

	int* arr = (int*)malloc(sizeof(int) * n);
	int* mark = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) mark[i] = 0;

	int targetsniper = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == target) targetsniper = 1;
	}
	if (targetsniper == 0) {
		printf("-1");
		return 0;
	}

	int cnt = 0;
	int index = 0;
	while (1) {
		cnt++;
		if (arr[index] == target) {
			printf("%d", cnt);
			return 0;
		}
		else if (mark[index] == 1) {
			printf("-1");
			return 0;
		}
		else {
			mark[index] = 1;
			index = arr[index];
		}
	}
}