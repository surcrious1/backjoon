#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int arr[5000001] = { 0, }, cnt = 1, n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (i != 0 && arr[i-1] <= arr[i]) cnt++;
	}
	printf("%d", cnt);
	return 0;
}