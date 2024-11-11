#include <stdio.h>
int a[1000000];
int main()
{
	int n;
	int max;
	int min;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	max = min = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
		if (max < a[i]) {
			max = a[i];
		}
	}
	printf("%d %d", min, max);
	return 0;
}