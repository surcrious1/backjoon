#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	int ur, tr, uo, to, sum;
	scanf("%d %d %d %d", &ur, &tr, &uo, &to);
	sum = 56 * ur + 24 * tr + 14 * uo + 6 * to;
	printf("%d", sum);
	return 0;
}