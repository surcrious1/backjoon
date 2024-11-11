#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	long long int tc, n, m, a, b;//n=leg,m=chicken
	scanf("%lld", &tc);
	for (int i = 0; i < tc; i++) {
		scanf("%lld %lld", &n, &m);
		b = n - m;
		a = m - b;
		printf("%lld %lld\n", a, b);
	}
	return 0;
}