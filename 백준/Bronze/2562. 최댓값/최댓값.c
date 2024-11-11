#include <stdio.h>
int main()
{
	int max;
	int a[9];
	int n;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
	}
	max = a[0];
	n = 0;
	for (int i = 1; i < 9; i++) {
		if (max < a[i]) {
			max = a[i];
			n = i;
		}
	}
	printf("%d\n", max);
	printf("%d", n+1);
	return 0;
}