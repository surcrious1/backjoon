#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	int tax, money;
	scanf("%d", &money);
	printf("%d %d", money * 39 / 50, money * 4 / 5 + money * 39 / 250);
	return 0;
}