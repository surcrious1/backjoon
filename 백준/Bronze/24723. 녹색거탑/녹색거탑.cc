#include<iostream>

int main(void) {
	int n, add = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) add *= 2;
	printf("%d", add);
	return 0;
}