#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main() {
	long long int n, result;
	long long int num[100] = { 0,1 };
	scanf("%d", &n);
	if (n < 2) printf("%lld", num[n]);
	else {
		for (int i = 2; i <= n; i++) {
			num[i] = num[i - 1] + num[i - 2];
			result = num[i];
		}
		printf("%lld", result);
	}
	return 0;
}