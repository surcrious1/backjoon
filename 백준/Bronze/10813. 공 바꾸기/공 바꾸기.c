#include <stdio.h>
int main()
{
	int n, m;
	int i, j;
	int tmp;
	int b[100];
	scanf("%d %d", &n, &m);
	for (int t = 0; t < n; t++) {
		b[t] = t + 1;
	}
	for (int t = 0; t < m; t++) {
		scanf("%d %d", &i, &j);
		tmp = b[i-1];
		b[i-1] = b[j-1];
		b[j-1] = tmp;
	}
	for (int t = 0; t < n; t++) {
		printf("%d ", b[t]);
	}
	return 0;
}