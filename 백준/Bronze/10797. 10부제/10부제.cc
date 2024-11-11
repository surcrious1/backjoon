#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	int n, a, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < 5; i++) {
		scanf("%d ", &a);
		if (a == n) cnt++;
	}
	printf("%d", cnt);
	return 0;
}