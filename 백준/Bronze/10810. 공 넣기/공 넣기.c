#include <stdio.h>
int main()
{
	int n, m;
	int i, j, k;
	int b[100] = {0};
	scanf("%d %d", &n, &m);
	for (int t = 0; t < m;t++) {
		scanf("%d %d %d", &i, &j, &k);
		for(int s=0;s<=j-i;s++) {
			b[s+i-1] = k;
			}
	}
	for (int t = 0; t < n; t++) {
		printf("%d ",b[t]);
	}
	return 0;
}