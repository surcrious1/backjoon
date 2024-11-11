#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int n;
	int cnt = 0;
	scanf("%d", &n);
	//under
	for (int i = 0;i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			cnt += i;
		}
	}
	//over
	for (int i = 0;i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			cnt += j;
		}
	}
	printf("%d", cnt);
	return 0;
}