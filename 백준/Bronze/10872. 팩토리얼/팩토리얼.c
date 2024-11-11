#include <stdio.h>
int main()
{
	int n;
	int sum = 1;
	scanf("%d", &n);
	if (0 <= n && n <= 12) {
		for (int i = 1; i <= n; i++) {
			sum = sum * i;
		}
	}
	printf("%d", sum);
	return 0;
}