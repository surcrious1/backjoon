#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main() {
	int n;
	int sum;
	int m;
	int result;
	scanf("%d", &n);
	for (int i = 1;i < n;i++) {
		result = m = i;
		sum = m;
		for (int j = 0;m > 0;j++) {
			sum += m % 10;
			m /= 10;
		}
		if (sum == n) {
			printf("%d\n", result);
			return 0;
		}
	} 
	printf("0\n");
	return 0;
}