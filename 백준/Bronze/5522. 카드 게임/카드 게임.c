#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int sum = 0;
	int a[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	printf("%d", sum);
	return 0;
}