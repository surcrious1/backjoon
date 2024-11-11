#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int n, arr[100] = { 0, }, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; n > 0; i++) {
		arr[i] = n % 9;
		cnt++;
		n /= 9;
	}
	for (int i = cnt - 1; i >= 0; i--) {
		printf("%d", arr[i]);
	}
	return 0;
}