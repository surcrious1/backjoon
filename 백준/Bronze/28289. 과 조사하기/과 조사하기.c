#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int p, g, c, n;
	int so = 0, in = 0, im = 0, first = 0;
	scanf("%d", &p);
	for (int i = 0; i < p; i++) {
		scanf("%d %d %d", &g, &c, &n);
		if (g == 1)first++;
		else if (c == 1 || c == 2)so++;
		else if (c == 3)im++;
		else in++;
	}
	printf("%d\n", so);
	printf("%d\n", im);
	printf("%d\n", in);
	printf("%d\n", first);
	return 0;
}