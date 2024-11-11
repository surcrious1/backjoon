#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int p, n, m, result;
	scanf("%d %d %d", &p, &n, &m);
	result = p * n - m;
	if (result > 0) printf("%d", result);
	else printf("0");
	return 0;
}