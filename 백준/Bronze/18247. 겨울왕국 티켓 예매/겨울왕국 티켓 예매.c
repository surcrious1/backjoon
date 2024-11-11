#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int tc, n, m, arr[26][9] = { 0, }, cnt = 0;
	scanf("%d", &tc);
	for (int i = 0; i < tc; i++) {
		scanf("%d %d", &n, &m);
		if (n < 12 || m < 4) printf("-1\n");
		else printf("%d\n", 11 * m + 4);
	}
	return 0;
}