#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int tc, a, b, c;
	scanf("%d", &tc);
	for (int i = 0; i < tc; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if (a <= b && a <= c) printf("%d\n", a);
		else if (b <= a && b <= c) printf("%d\n", b);
		else if(c <= a && c <= b) printf("%d\n", c);
	}
	return 0;
}