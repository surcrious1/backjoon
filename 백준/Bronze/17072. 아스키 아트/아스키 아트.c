#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int gkqrP(int r, int g, int b) {
	int result;
	result = 2126 * r + 7152 * g + 722 * b;
	return result;
}
int main(void) {
	int n, m, r, g, b, sum;
	char str;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d %d %d ", &r, &g, &b);
			sum = gkqrP(r, g, b);
			if (0 <= sum && sum < 510000)printf("#");
			else if (sum < 1020000)printf("o");
			else if (sum < 1530000)printf("+");
			else if (sum < 2040000)printf("-");
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}