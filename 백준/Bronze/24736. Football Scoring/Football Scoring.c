#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int t, f, s, p, c, sum1, sum2;
	scanf("%d %d %d %d %d", &t, &f, &s, &p, &c);
	sum1 = 6 * t + 3 * f + 2 * s + p + 2 * c;
	scanf("%d %d %d %d %d", &t, &f, &s, &p, &c);
	sum2 = 6 * t + 3 * f + 2 * s + p + 2 * c;
	printf("%d %d", sum1, sum2);
	return 0;
}