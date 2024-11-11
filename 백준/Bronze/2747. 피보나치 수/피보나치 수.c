#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int sum = 0;
	int n;
	int a, b, tmp;
	a = 0;
	b = 1;
	scanf("%d", &n);
	for (int i = 0; i < n - 2; i++) {
		tmp = a;
		a = b;
		b = b + tmp;
	}
	sum = a + b;
	printf("%d", sum);
	return 0;
}