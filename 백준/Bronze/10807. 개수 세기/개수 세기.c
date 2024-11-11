#include <stdio.h>
int main()
{
	int n;
	int m;
	int c = 0;
	scanf("%d", &n);
	int a[100] = {0};
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	for (int i = 0; i < n; i++) {
		if (a[i] == m) {
			c = c + 1;
		}
	}
	printf("%d", c);
	return 0;
}