#include <stdio.h>
int main()
{
	int n;
	int std[30] = {0};
	for (int t = 0; t < 28; t++) {
		scanf("%d\n", &n);
		std[n - 1] = 1;
	}
	for (int t = 0; t < 30; t++) {
		if (std[t] == 0) {
			printf("%d ", t + 1);
		}
	}
	return 0;
}