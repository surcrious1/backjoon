#include<stdio.h>
int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (b >= c) {
		printf("-1");
		return 0;
	}
	if (a / (c - b) >= 0) printf("%d", a / (c - b) + 1);
	else printf("-1");
}