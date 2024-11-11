#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	int arr[50] = { 0, }, l, n;
	int low = 0, high = 1000, cnt = 0;
	int i = 0;
	scanf("%d", &l);
	for (i = 0; i < l; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &n);
	for (i = 0; i < l; i++) {
		if (arr[i] <= n && arr[i] > low) low = arr[i];
		if (arr[i] >= n && high > arr[i]) high = arr[i];
	}
	//printf("low %d high %d\n", low, high);
	if (low == n && high == n) {
		cnt = 0;
		//printf("low %d high %d\n", low, high);
	}
	else {
		low = n - low;
		high = high - n;
		//printf("low %d high %d\n", low, high);
		cnt = low * high - 1;
	}
	printf("%d", cnt);
	return 0;
}