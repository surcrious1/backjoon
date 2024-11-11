#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	a = b - a;
	printf("%d %d", a, b);
	return 0;
}