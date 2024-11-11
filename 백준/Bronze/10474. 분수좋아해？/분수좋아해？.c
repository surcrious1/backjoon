#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	int a, b;
	while (scanf("%d %d", &a, &b) && a != 0 && b != 0) {
		printf("%d %d / %d\n", a / b, a % b, b);
	}
	return 0;
}