#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main() {
	int a, b, c, d, e, f;
	int x, y;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d ,&e ,&f);
	x = (c * e - b * f) / (a * e - b * d);
	y = (c * d - a * f) / (b * d - a * e);
	printf("%d %d", x, y);
	return 0;
}
