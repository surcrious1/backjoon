#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	int a, b, c, p, n;
	int cnt, anw;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cnt = 0;
		anw = 0;
		scanf("%d %d %d %d", &a, &b, &c, &p);
		if (a % p == 0) cnt++;
		if (b % p == 0) cnt++;
		if (c % p == 0) cnt++;
		if (cnt >= 2) anw = 1;
		printf("%d\n", anw);
	}
	return 0;
}