#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int a, b, c;
	int result;
	scanf("%d %d %d", &a, &b, &c);
	if (a + c >= b) {
		printf("%d", a + c);
		return 0;
	}
	else printf("%d", b);
	return 0;
}