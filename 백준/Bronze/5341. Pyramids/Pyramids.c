#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int main(void) {
	int n, sum = 0;
	while (1) {
		sum = 0;
		scanf("%d", &n);
		if (n == 0) break;
		for (int i = 1; i <= n; i++) {
			sum += i;
		}
		printf("%d\n", sum);
	}
	return 0;
}