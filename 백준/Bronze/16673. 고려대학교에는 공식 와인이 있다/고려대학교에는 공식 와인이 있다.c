#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	unsigned long long int c, k, p, sum = 0;
	scanf("%d %d %d", &c, &k, &p);
	for (int i = 1; i <= c; i++) {
		sum += k * i + p * (i * i);
	}
	printf("%d", sum);
	return 0;
}