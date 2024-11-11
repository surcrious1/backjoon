#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main(void) {
	double n, d, f, p, result, mod;
	scanf("%lf", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf %lf %lf", &d, &f, &p);
		printf("$%.2lf\n", d * f * p);
	}
	return 0;
}